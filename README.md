# Web3 Super Name System

Introduction to W3N

WEB3 Super Name System System (W3N) is a distributed, open, scalable, tradable, multi-language domain name system based on the EOS blockchain.

W3N's job is to map multilingual, human-readable names (such as "Li Bai") to machine-readable identifiers such as EOS addresses, Bitcoin addresses, Ethereum addresses, content hashes and metadata, and storage The identification of the NFT on the chain. W3N also supports "reverse parsing", which allows metadata (such as canonical names, interface descriptions, NFT avatar serialization data) to be associated with EOS addresses. W3N has similar goals to Ethereum's ENS and the Internet's domain name service DNS, but due to the functions and limitations provided by the Ethereum blockchain, as well as the too low TPS, W3N is implemented on EOS, using the TABLE structure of EOS to achieve more Fast parsing speed and support for larger metadata, as well as the implementation of a nearly zero-cost decentralized domain name registration, bidding, and transfer system. Like DNS, W3N operates on a dot-delimited hierarchical name system called a domain, and the owner of the domain has full control over subdomains.

Top-level domains, such as ".w3n", are owned by a smart contract called W3N, and the registrar specifies the rules that govern the allocation of its subdomains. Anyone can take ownership of a domain they use by adhering to the rules set forth in these registrar contracts. w3n also supports importing DNS names that users already own for use on W3N. ".w3n" is hidden by default. For example, when a user preemptively registers the domain name "Li Bai", the default name is "Li Bai.w3n". In actual use, the "w3n" field can be ignored. Squatting is supported in multiple languages. The system will support mainstream languages and will be extended to all languages that humans currently have writing systems.

Due to the hierarchical nature of W3N, anyone with a domain of any level can configure subdomains for themselves or others as needed. For example, if Alice owns "Li Bai", she can create "Will Enter Wine.Li Bai" and configure it as she wishes. The actual address is "Jianjinjiu.Libai.w3n". For the sake of convenience in actual use, the w3n field is hidden by default. This design increases ease of use and lowers the language threshold for users to enter web3.0. W3N is deployed on the EOS announcement blockchain main network and will be expanded to multiple EOS sister chain networks in the future. If you use a library like eosjs , scatter , anchor , etc. Javascript library or an end-user application, it will automatically detect the network you are interacting with and use W3N deployment on that network.

After the W3N smart contract is deployed on the main network, if you have an EOS account, you can use the bloks.io browser to register a domain name in the smart contract, or use the tools on our homepage to register it. After the transaction component is online, you can place orders to trade domain names that have been registered, or transfer domain names to other people's EOS accounts, and create a truly decentralized domain name leasing market.

W3N architecture

W3N is divided into registration component and transaction component, which are composed of two major components

The registered component is structurally designed in the EOS Table

1. Domain owner (EOS account address)

2. Domain binding resolution object (EOS account address)

3. Blockchain addresses of other chains bound to the domain (BTC address, ETH address, etc.)

4. Domain-bound serialized NFT avatar

5. Domain registration time

6. Domain-bound resolvers and TTL

7. The resolution object bound to the subdomain (EOS address)

Trading component in EOS Table structure design

1.Pending order price of the domain

2. The last transaction price corresponding to the domain

3. Bidding for existing domains

W3N Vision

WEB 3.0 is the fourth industrial revolution. We will not rely on centralized systems to realize the production, transaction and transfer of production materials. WEB 3.0 must be based on high-performance and decentralized blockchain, W3N Taking advantage of the high performance of EOS, the WEB3.0 domain name system was created, which will ensure that EOS is at the forefront of the WEB3.0 revolution and becomes one of the standard blockchain protocols of WEB3.0.


W3N简介

WEB3域名系统（W3N）是一个基于EOS区块链的分布式、开放、可扩展的，可交易的，多语言的支持的域名系统。

W3N 的工作是将多语言的，人类可读的名称（如“李白”）映射到机器可读的标识符，如EOS地址、比特币地址、以太坊地址，内容哈希和元数据，以及储存在链上的NFT的标识。W3N 还支持“反向解析”，从而可以将元数据（例如规范名称，接口描述，NFT头像序列化数据）与EOS地址相关联。
W3N 与以太坊的ENS和互联网的域名服务 DNS 具有相似的目标，但由于以太坊区块链提供的功能和限制，以及过低的TPS，W3N在EOS上实现，利用EOS的TABLE结构，达到更快的解析速度和对更大元数据的支持，以及近乎0成本的去中心化的域名抢注，竞拍，转让系统的实现。 与DNS 一样，W3N 在称为域的点分隔分层名称系统上运行，域的所有者可以完全控制子域。

顶级域，如“.w3n”，由称为W3N的智能合约拥有，注册商指定了管理其子域分配的规则。任何人都可以通过遵守这些注册商合同规定的规则，获得自己使用的域的所有权。 w3n还支持导入用户已经拥有的 DNS名称以在 W3N 上使用。默认情况下“.w3n” 为隐藏的。例如用户抢注了“李白”这个域名，默认名称为“李白.w3n”,实际使用时候“w3n”字段是可以忽略携带的。抢注是多语言支持的，系统会支持主流语言，并且会扩展到所有人类正在有文字系统的语言。

由于W3N的等级性质，任何拥有任何级别域的人都可以根据需要为自己或他人配置子域。例如，如果 Alice 拥有“李白”，她可以创建“将进酒.李白”并按照她的意愿进行配置。而这个实际地址为“将进酒.李白.w3n”，w3n字段在实际使用中为了方便起见，默认是隐藏的。这样的设计，增加了易用性，降低用户进入web3.0的语言门槛。
W3N部署在EOS公告区块链主网络，未来将扩展到多个EOS姐妹链网络上。如果您使用诸如eosjs ，scatter ，anchor等 Javascript 库之类的库或最终用户应用程序，它将自动检测您正在与之交互的网络并在该网络上使用 W3N 部署。

在 W3N 智能合约在主网部署以后，如果你拥有EOS账号，可以使用bloks.io浏览器在智能合约里抢注域名，或使用我们主页上的工具抢注。在交易组件上线以后可以挂单交易已经抢注的域名，或者转让域名给别人的EOS账号，以及真正去中心化的域名租赁市场。

W3N构架

W3N分成注册组件，和交易组件，2大组件构成

注册组件在EOS的Table里结构设计

 1.域的所有者（EOS账号地址）

 2.域的绑定的解析对象（EOS账号地址）

 3.域绑定的其他链的区块链地址（BTC地址，ETH地址等）

 4.域绑定的序列化的NFT头像

 5.域的注册时间

 6.域绑定的解析器和TTL

 7.子域绑定的解析对象（EOS地址）


交易组件在EOS的Table结构设计

 1.域的挂单价格

 2.域对应的最后一次成交价

 3.已存在域的出价求购


W3N愿景

WEB 3.0是第四次工业革命，我们将不依赖于中心化的系统，实现生产资料的生产，交易和转让，WEB 3.0必须是基于高性能的和去中心化的区块链之上的，W3N利用了EOS的高性能，创建了WEB3.0 域名系统，将确保EOS走在WEB3.0革命浪潮的前列，成为WEB3.0的标准区块链协议之一。
