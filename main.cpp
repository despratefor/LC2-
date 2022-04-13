#include <iostream>


using namespace std;

//全局变量
struct ListNode {
	     int val;
	     struct ListNode *next;
};

//题目函数
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
	int overten = 0;

	while(l1!=NULL && l2!=NULL)
	{
		if ((l1->val + l2->val + overten) <10)
		{
			l1->val = l1->val + l2->val + overten;
			overten = 0;
		} 
		else
		{
			l1->val = l1->val + l2->val - 10 + overten; //大于十，进一位
			overten = 1;
		}
		l1 = l1->next;
		l2 = l2->next;
	}

	if(l2==NULL && l1!=NULL)
	{

	}

	return l1;
}

//测试构建

int main(void)
{



}


