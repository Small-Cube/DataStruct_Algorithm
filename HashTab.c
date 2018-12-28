#include "Hash.h"
//hash函数
Index Hash(const char*Key,nt TableSize)
{
      Index HashVal=0;
      while(*Key!='\0')
       HashVal=(HashVal<<5)+*Key++;
      return HashVal%TableSize;
}
//初始化一个散列表
HashTable InitializeTable( int TableSize)
{
	HashTable H;
	int i;
	if(TableSize<MinTableSize)
	{
		printf("TableSize size too small");
		return 0;
	}
	//创建hash表
	H=malloc(sizeof(struct HashTbl));
	if(H==NULL)
		printf("out of space!");
	//设置表的大小为素数
	H->TableSize=NextPrime(TableSize);
	//创建一个链表数组，数组每个元素是一个链表，数组大小是hash表的大小
	H->TheList=malloc(sizeof(List)*H->TableSize);
	if(H->TheList==NULL)
		printf("out of space!");
	//创建链表
	for(i=0;i<TableSize;i++)
	{
		H->TheList[i]=malloc(sizeof(struct ListNode));
		if(H->TheList[i]==NULL)
			printf("out of space");
		else 
			H->TheList[i]->Next=NULL;
		
	}
	return 0;
	
}
//如果Key是字符串的话，需要用字符串比较函数
Position Find( ElementType key, HashTable H)
{
	Position P;
	List L;
	//hash函数返回一个值，L为指向这值的指针。一个值可能对应多个，L等于说是一个链表的头节点。
	L=H->TheList[(Hash(key,H))];
	P=L->next;
	while(P!=NULL&&P->Element!=key)
		P=P->next;
	
	return P;
}
//有点不好的地方是计算了两次hash函数。
void Insert( ElementType Key, HashTable H)
{
	Position P,Tmp;
	List L;
	P=find(Key,H);
	if(P==NULL)
	{
		Tmp=malloc(sizeof(ListNode));
		if(Tmp==NULL)
			printf("out of space!!");
		else
		{
			L=H->TheList[hash(Key,H)];
			Tmp->next=L->next;
			Tmp->Element=Key;
			L->next=Tmp;
			
		}
	}
}