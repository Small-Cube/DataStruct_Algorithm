#ifndef _HashSeq_H
typedef int ElementType;
struct ListNode;
typedef struct ListNode *Position;
typedef Position List;
struct HashTbl;
typedef struct HashTbl *HashTable;
HashTable InitializeTable( int TableSize);
void DestroyTable( HashTable H);
Position Find( ElementType key, HashTable H);
void Insert( ElementType Key, HashTable H);
ElementType Retrieve(Position P);
#endif
//链表
struct ListNode
{
	ElementType Element;
	Position next;

};
//HashTable包括一个整数和一个指向一个链表的指针

struct HashTbl
{
	int TableSize;
	List *TheList;
};

