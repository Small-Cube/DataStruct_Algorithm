#include "double.h"
Double_List List_Head;
//创建头节点
PtrToNode Create_DoubleList(Double_List List_Head)
{
	List_Head=(Double_List)malloc(sizeof(Node));
	if(!List_Head)
	{
		printf("creat node error");
	}
	List_Head->next=NULL;
	List_Head->prev=NULL;
	return List_Head;
}
Position find(DoubleList L,ElementType x)
{
	Position p;
	p=L-next;
	if(p==NULL)
	{
		printf("the list is empty");
		return NULL;
	}
	while(p!=NULL&&p->Element!=x)
	{
		p=p->next;
	}
	return p;
}
void Delet(DoubleList L,ElementType x)
{
	Position p;
	p=find(L,x);
	if(P==NULL)
		printf("did not find x");
	else{
		p->pre->next=p->next;
		p->next->pre=p->pre;
		free(p);
	}
}
//尾插
void Insert(DoubleList L,ElementType x,Position P)
{
	Position Temp;
	Temp=(Position)malloc(sizeof(Node));
	if(Temp==NULL)
		printf("out of space!");
	Temp->Element=x;
	Temp->next=P->next;
	if(P->next!=NULL)
	P->next->prev=Temp;
	
	Temp->prev=P;
	P->next=Temp;
	
}
//遍历
void PrintList(DoubleList L)
{
	PtrToNode p;
	p=L->next;
	if(p==NULL)
		printf("the list is empty");
	while(P!=NULL)
	{
		printf("%d\n",p->Element);
		p=p->next;
		
	}
}