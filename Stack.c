#include"Stack.h"
//判断是否为空
int IsEmpty(Stack S)
{
	return S->next==NULL;
}
//创建栈
Stack CreateStack(void)
{
	Stack S;
	S=(Stack)malloc(sizeof(struct Node));
	if(S==NULL)
		printf("out of space！");
	S->next=NULL;
	return S;
}
//
void MakeEmpty(Stack S)
{
	if(S==NULL)
		printf("must create stack fist!");
	else 
		while(S->next!=NULL)
			POP(S);
}
//
void POP(Stack S)
{
	PtrToNode temp;
	if(S->next==NULL)
		printf("the stack is empty!");
	else{
		temp=S->next;
		S->next=S->next->next;
		free(temp);
	}
}
//
ElementType Top(Stack_List S)
{
	if(S->next==NULL)
		printf("the stack is empty!");
	else 
		return S->next->Element;
}
//
void PUSH(ElementType X,Stack S)
{
	PtrToNode NewNode;
	NewNode=(PtrToNode)malloc(sizeof(struct Node));
	if(NewNode==NULL)
		printf("out of space！");
	else
	{
		NewNode->Element=X;
		NewNode->next=S->next;
		S->next=NewNode;
	}
}