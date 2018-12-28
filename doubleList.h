#ifndef DOUBLE_LIST_H
#define DOUBLE_LIST_H
struct Node;
typedef struct Node * PtrToNode;
typedef PtrToNode DoubleList;//指向头节点
typedef PtrToNode Position;
typedef int ElementType;
PtrToNode Create_DoubleList();
void PrintList(DoubleList L);
void Insert(DoubleList L,ElementType x,Position P);
Position find(DoubleList L,ElementType x);
void Delet(DoubleList L,ElementType x);
struct Node
{
	ElementType Element;
	Position prev;
	Position next;
	
};


#endif