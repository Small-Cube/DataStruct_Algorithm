#include "Heap.h"

PrinrityQueue Initialize(int MaxElements)
{
	PrinrityQueue H;
	if(MaxElements<Min_Size)
		printf("too small");
	H=malloc(sizeof(struct HeapStack));
	if(H==NULL)
		printf("out of space!");
	
	H->Elements=malloc(sizeof(ElementType)*(MaxElements+1));
	if(H==NULL)
		printf("out of space!");
	H->Size=0;
	H->Capity=MaxElements;
	H->Elements[0]=Mindata;//将一个很小的值存放到位置0，
	//保证此值小于或等于其余任何值，有点类似链表中头节点的使用。
	
	return H;
}

void Insert(ElementType X,PrinrityQueue H);
{
	int i;
	if(IsFull)
	{
		printf("PrinrityQueue is full");
		
		return ;
	}
	//创建一个空穴，也就是寻找队列中下一个空节点
	//判断是否满足堆序性，也就是看该节点的父节点的值是否小于要插入的值，不小于则将父节点下沉
	//也就是让创建的空穴的值为父节点的值，当循环不满足时，也就是找到该插入的位置，最后赋值
	for(i=++H->Size;H->Elements[i/2]>X;i/=2)
	{
		H->Elements[i]=H->Elements[i/2];
		
	}
	H->Elements[i]=X;
	
}

