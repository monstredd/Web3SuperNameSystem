#include <hub.hpp>

namespace eosio {

void w3n::hub(name from, name to, eosio::asset quantity, std::string memo)
 {   
   if (to != get_self() || from == get_self()) 
         return; 
   
     action action_hub = get_action(1,0);

   std::string memo_low_case = trim(memo);

   for (char& c : memo_low_case) {
        if (std::isupper(c)) {
            c = std::tolower(c);
        }
    }

    
    std::vector<char> data_vector(memo_low_case.begin(), memo_low_case.end());

    checksum256 hash = eosio::sha256(data_vector.data(), data_vector.size());

    name table_name = "name.w3n"_n;

    name_table nt (table_name,table_name.value);
    
    auto idx = nt.get_index<"namehash"_n>();
    
    auto itr = idx.find(hash);

    if (itr != idx.end())
    {
	
        for ( ; itr != idx.end() ; itr++)
        {
           std::string origin_name = itr->web3name;
          
           for (char& c : origin_name) {
            if (std::isupper(c)) {
              c = std::tolower(c);
            }
           }
           
           
           if (memo_low_case == origin_name && itr->expiretime >= current_time_point().sec_since_epoch())
           {
              name pointer = itr->pointer;
              std::string acc_from = from.to_string();
              std::string memo = ("From: " + acc_from);
            action{
             permission_level{get_self(), "active"_n},
             action_hub.account,
             "transfer"_n,
             std::make_tuple(get_self(), pointer, quantity,memo)
           }.send();
           return;
           }
        }
    

    }

     
 }
 

}
