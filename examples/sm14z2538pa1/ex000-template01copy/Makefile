
#项目的名称
CONTIKI_PROJECT = ip64-router
#编译所有相关的项目
all: $(CONTIKI_PROJECT)
#定义目录变量
CONTIKI = ../../..
#使用路由
ROUTER = 1

#添加定义的头文件
DEFINES+=PROJECT_CONF_H=\"project-conf.h\"


#引用编译规则
include $(CONTIKI)/Makefile.include
