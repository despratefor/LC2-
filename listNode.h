#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct Link{
	int  elem;
	struct Link *next;
}link;

//创建链表头结点并初始化，头结点数据域无意义
link * initLink();
//在链表最后面加上一个节点
link * addElem(link * p,int elem);
//链表插入的函数，p是链表，elem是插入的结点的数据域，add是插入的位置
link * insertElem(link * p,int elem,int add);
//删除结点的函数，p代表操作链表，add代表删除节点的位置
link * delElem(link * p,int add);
//查找结点的函数，elem为目标结点的数据域的值
int selectElem(link * p,int elem);
//更新结点的函数，newElem为新的数据域的值
link *amendElem(link * p,int add,int newElem);
//打印所有链表数据
void display(link *p);

