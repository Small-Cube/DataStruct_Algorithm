#ifndef HEAP_H
#define HEAP_H
#define Max_Element 20
#define Min_Size 10
#defien Mindata -1
struct  HeapStack;
typedef struct HeapStack *PrinrityQueue;
PrinrityQueue Initialize(int MaxElements);
void Insert(ElementType X,PrinrityQueue H);
ElementType DeleteMin(PrinrityQueue H);



#endif

struct HeapStack 
{
	int Capacity;
	int Size;
	ElementType *Elements;
};
