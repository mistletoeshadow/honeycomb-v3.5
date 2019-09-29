//重新定义uip调用接口
#undef UIP_FALLBACK_INTERFACE
#define UIP_FALLBACK_INTERFACE ip64_uip_fallback_interface

#define IP64_ADDRMAP_CONF_ENTRIES 64
#define ROUTER_CONF 1