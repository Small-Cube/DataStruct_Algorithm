#ifndef QUEUE_H
#define QUEUE_H
//使用指针实现队列
struct QueueNode;
typedef QueueNode *PtrToNode;
typedef QueueNode *Queue;
typedef int ElementType;
int IsEmpty(Queue Q);
int IsFull(Queue Q);
Queue CreatQueue();
void MakeEmpty();
void EnQueue(ElementType X,Queue Q);
ElementType Dequeue(Queue *Q);
static int size(Queue Q);
struct QueueNode
{
	ElementType Element;
	Queue next;
}

#endif