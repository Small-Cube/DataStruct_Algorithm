#include "queue.h"
//判断是否为空
int IsEmpty(Queue Q)
{
	return Q->next==NULL;
}
//返回队列大小
static int size(Queue Q)
{
	int count=0;
	PtrToNode=Q->next;
	while(PtrToNode!=NULL)
	{
		PtrToNode->PtrToNode-next;
		count++;
		
	}
	return count;
}
//判断是否已满
int IsFull(Queue Q);
{
	int isempty;
	if(isempty=size(Q))
		return 1;
	else
		return 0;
}
//创建队列其实是创建一个头节点
Queue CreatQueue()
{
	PtrToNode Q;
	Q=(PtrToNode)malloc(sizeof(QueueNode));
	if(NewNode==NULL)
		printf("out of space!");
	else
	Q->next=NULL;
	return Q;
}
//删除队列
void MakeEmpty(Queue Q)
{
    PtrToNode Temp,P;
	Temp=Q->next;
	Q->next=NULL;
	while(Temp!=NULL)
	{
		P=Temp->next;
		free(Temp);
		Temp=p;
		//free(P);
	}
}
//插入元素。
void EnQueue(ElementType X,Queue Q)
{
	PtrToNode NewNode,Temp;
	Temp=Q->next;
	NewNode=(PtrToNode)malloc(sizeof(QueueNode));
	if(NewNode==NULL)
		printf("out of space!");
	else
		while(Temp!=NULL)
		{
			Temp=Temp->next;
		}
	NewNode->Element=X;
	Temp=NewNode;
	
	
}
//如果直接将队列传入，在更改头指针时会出错。
//返回并删除队列开头元素
ElementType Dequeue(Queue *Q)
{
	ElementType val;
	PtrToNode Temp;
	Temp=(*Q)->next;
	val=Temp->Element;
	(*Q)->next=Temp->next;
	free(Temp);
	return val;
	
	
}