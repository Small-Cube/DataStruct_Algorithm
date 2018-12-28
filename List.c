#include "List.h"

//
int IsEmpty(List L)
{
	return L->next==NULL;
}
//
int IsLast(Position P,List L);
{
	return P->next==NULL;
}
//return position of x in L
Position Find(ElementType x,List L)
{
	Position P;
	P=L->next;
	while(P!=NULL&&P->Element!=x)
		P=P->next;
	return P;
}
//return prveious position of x in L
Position FindPrevious(ElementType x,List L)
{
	Position P;
	P=L;
	while(P!=NULL&&P->next->Element!=x)
		P=P->next;
	return P;
}
//delete x in L
void Delete(ElementType x,List L);
{
	Position P,Temp;
	P=FindPrevious(x,L);
	while(!IsLast(P,L))
	{
		Temp=P->next;
		P->next=Temp->next;
		free(Temp);
	}
	
}
//insert x in L
void Insert(ElementType x,List L,Position P)
{
	Position Temp;
	Temp=malloc(sizeof(struct Node));
	if(Temp==NULL)
		printf("out of space!!");
	Temp->Element=x;
	Temp->next=P->next;
	P->next=Temp;
	
}
//delete L
void DeleteList(List L)
{
	Position P,Temp;
	P=L->next;
	L->next=NULL;
   while(P!=NULL)
   {
	   Temp=P->next;
	   free(P);
	   P=Temp;
   }
}