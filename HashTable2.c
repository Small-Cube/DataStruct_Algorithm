#include "HashTable2.h"

Hash_Table InitTable(int Tablesize)
{
	PtrToHash H;
	int i;
	if(Tablesize<MinTbable)
	{
		printf("tablesize is to small");
	}
	H=malloc(sizeof(struct Hash_Table));
	if(H==NULL)
		printf("out of space!");
	H->Tblesize=Tablesize;//最好是素数
	//申请空间
	H->TheCell=malloc(sizeof(struct Cell)*Tablesize);
	if(H->TheCell==NULL)
		printf("out of space!");
	for(i=0;i<Tablesize;i++)
	{
		H->TheCell[i].info=Empty;
	}
	return H;
}
