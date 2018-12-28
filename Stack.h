#ifndef STACK_H
#define STACK_H
struct Node;
typedef Node *PtrToNode;
typedef PtrToNode Stack;
typedef PtrToNode Position;
typedef int ElementType;
Stack CreateStack(void);
int IsEmpty(Stack S);
void POP(Stack S);
void PUSH(ElementType X,Stack S);
ElementType Top(Stack S);
void MakeEmpty(Stack S);
struct Node
{
	ElementType Element;
	Position *next;
};




#endif 