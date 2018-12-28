//头文件
#ifndef LIST_H
#define LIST_H
struct Node;
tydedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
typedef ElementType int;
//return ture if L is empty
int IsEmpty(List L);
//
int IsLast(Position P,List L);
//return position of x in L
Position Find(ElementType x,List L);
//return prveious position of x in L
Position FindPrevious(ElementType x,List L);
//delete x in L
void Delete(ElementType x,List L);
//insert x in L
void Insert(ElementType x,List L);
//delete L
void DeleteList(List L);
struct Node
{
	ElementType Element;
	Position next;
}



#endif