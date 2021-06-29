#include "src/main/declare/declare.h"

int main() {
    int insert_value = 256110;

    //创建一个指针，使其指向新创建的链表的头指针
//    PNode list_obj = create_list();
    PNode list_obj = create_list_case();

    //遍历链表
    traversal_list(list_obj);
    //链表查询
//    find_list(list_obj);
    find_list_case(list_obj);

    //链表插入,在第3位置插入值value
    insert_list(list_obj, 3, insert_value);
    traversal_list(list_obj);

    //删除链表中第三位置的元素
    delete_list_ele(list_obj, 3);
    traversal_list(list_obj);

    //删除整个链表
    delete_whole_list(list_obj);
    traversal_list(list_obj);

    return 0;
}