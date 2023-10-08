#pragma once

#include <eosio/asset.hpp>
#include <eosio/eosio.hpp>
#include <eosio/transaction.hpp>
#include <string>
#include <vector>
#include <eosio/crypto.hpp>


namespace eosiosystem {
   class system_contract;
}

namespace eosio {

   using std::string;
   using std::vector;

   class [[eosio::contract("hub")]] w3n : public contract {
      public:
         using contract::contract;

         [[eosio::on_notify("*::transfer")]]
         void hub(name from, name to, eosio::asset quantity, std::string memo);
         
      private:
         struct nametable {
            uint64_t id;
            checksum256 namehash;
            string web3name;
            name holder;
            name pointer;
            uint64_t expiretime;
            asset price;

            auto primary_key()const { return id; }
            checksum256 get_hash( ) const { return namehash; }
            uint64_t get_account()const {return holder.value ;}
         };
          
         typedef eosio::multi_index<"nametable"_n, nametable, 
         eosio::indexed_by<"namehash"_n, eosio::const_mem_fun < nametable,checksum256, &nametable::get_hash>>,
         eosio::indexed_by<"holder"_n, eosio::const_mem_fun < nametable,uint64_t, &nametable::get_account>>>
         name_table;
         
       string trim(const string& str) {
        size_t start = str.find_first_not_of(" \t\n\r");
        if (start == string::npos)
            return "";
        size_t end = str.find_last_not_of(" \t\n\r");
        return str.substr(start, end - start + 1);
    }

   };
}
