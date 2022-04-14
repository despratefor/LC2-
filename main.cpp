#include <iostream>
#include "listNode.h"

using namespace std;

//ȫ�ֱ���
// struct ListNode {
// 	     int val;
// 	     struct ListNode *next;
// };
 typedef link ListNode ;

//��Ŀ����
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


link* addTwoNumbers( link* l1, link* l2){
	int overten = 0;
	link* l1head = l1;

	while(l1!=NULL || l2!=NULL)
	{
		if(l1->next==NULL && l2->next!=NULL)//���L1����϶̣�����0����
		{
			link* supply = (link*) malloc(sizeof(link));
			supply->elem = 0;
			supply->next = NULL;
			l1->next = supply;
		}
		if(l2->next==NULL && l1->next!=NULL)//���L2����϶̣�����0����
		{
			link* supply = (link*) malloc(sizeof(link));
			supply->elem = 0;
			supply->next = NULL;
			l2->next = supply;
		}

		if ((l1->elem + l2->elem + overten) <10)	//���������ϵ������
		{
			l1->elem = l1->elem + l2->elem + overten;
			overten = 0;
		} 
		else
		{
			l1->elem = l1->elem + l2->elem - 10 + overten; //����ʮ����һλ
			overten = 1;
		}

		if(l1->next==NULL && l2->next==NULL && overten==1)//������λ�н�λ
		{
			link* supply = (link*) malloc(sizeof(link));
			supply->elem = 1;
			supply->next = NULL;
			l1->next = supply;
			overten = 0;
			break;
		}
		l1 = l1->next;
		l2 = l2->next;
	}

	return l1head;
}

//���Թ���

int main(void)
{
	link *p1=initLink();
	addElem(p1,9);
	addElem(p1,9);
	addElem(p1,9);
	addElem(p1,9);
	addElem(p1,9);
	addElem(p1,9);
	addElem(p1,9);

	link *p2=initLink();
	addElem(p2,9);
	addElem(p2,9);
	addElem(p2,9);
	addElem(p2,9);

	link* rst = initLink();
	rst = addTwoNumbers(p1,p2);

	return 0;
}


