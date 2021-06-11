//
// Created by user on 21-6-12.
//
#include "./../head/header.h"

/**
 * 数据库命令文档
 */
void DataBaseHelpDoc() {
    printf(" \t\t\t*DBMS命令一览表*\n");
    printf("**,use name 使用name数据库 /use 关闭数据库 quit退出系统*\n");
    printf("*1,创建数据库命令语法格式 --create databasename*\n");
    printf("*2,追加字段的命令 --append*\n");
    printf("*3,浏览数据库中所有的字段命令 --brows*\n");
    printf("*4,go命令语法格式 --go number (eg:go 1) 用dips浏览定位的字段 *\n");
    printf("*5,条件定位命令语法格式 --locate for 字段名=\"字段内容\"*\n");
    printf("*6,按条件删除命令语法格式 --delete for 字段名=\"字段内容\"*\n");
    printf("*7,全部删除命令 --zap*\n");
    printf("*8,按条件修改命令 --change for 字段名=\"字段内容\"*\n");
    printf("*9,按条件排序命令 --升序:sort on 字段名[/a] 降序:sort on 字段名/d *\n");
    printf("*10,打开帮助文档命令 --help *\n");
}
