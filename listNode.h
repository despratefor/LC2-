#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct Link{
	int  elem;
	struct Link *next;
}link;

//��������ͷ��㲢��ʼ����ͷ���������������
link * initLink();
//��������������һ���ڵ�
link * addElem(link * p,int elem);
//�������ĺ�����p������elem�ǲ���Ľ���������add�ǲ����λ��
link * insertElem(link * p,int elem,int add);
//ɾ�����ĺ�����p�����������add����ɾ���ڵ��λ��
link * delElem(link * p,int add);
//���ҽ��ĺ�����elemΪĿ������������ֵ
int selectElem(link * p,int elem);
//���½��ĺ�����newElemΪ�µ��������ֵ
link *amendElem(link * p,int add,int newElem);
//��ӡ������������
void display(link *p);

