
//引用contiki的api
#include "contiki.h"
//引用contiki-net.h
#include"contiki-net.h"
//引用ip64协议api
#include"ip64/ip64.h"
//引用contiki网络协议栈
#include"net/netstack.h"

//标准设备输入输出库
#include <stdio.h> /* For printf() */
/*---------------------------------------------------------------------------*/
//声明进程
PROCESS(router_node_process, "Router node");
//系统初始化的时候自动启动这个进程
AUTOSTART_PROCESSES(&router_node_process);

/*---------------------------------------------------------------------------*/

//进程实现
PROCESS_THREAD(router_node_process, ev, data)
{
  //进程开始
  PROCESS_BEGIN();
  //rpl根节点初始化
   rpl_dag_root_init_dag();
//ip64模块初始化
ip64_init();
 
 while(1){
    PROCESS_WAIT_EVENT();
 }
  //进程结束
  PROCESS_END();
}
/*---------------------------------------------------------------------------*/
