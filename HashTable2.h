#ifndef HASH_TABLE
#define HASH_TABLE
#define MinTbable  10
typedef unsigned int Index;
typedef Index Position;
struct Hash_Table;
typedef struct Hash_Table *PtrToHash;
Hash_Table InitTable(int Tablesize);
//使用一个枚举变量来表示该位置元素状态，因为平方探测法不能真的删除，将该元素标记为Delted即可。
enum KindofEntry
{
	Legitimate,
	Empty,
	Deleted
	
};
//一个元素其实存放两个值，一个是其真的值，一个是其状态
struct Hash_Entry
{
	EmementType Element;
	enum KindofEntry info;
};
typedef struct Hash_Entry Cell;
//定义hash表存放表的大小和一个动态分配的数组，存放值。
struct Hash_Table
{
	int Tablesize;
	Cell *TheCell;
};













#endif