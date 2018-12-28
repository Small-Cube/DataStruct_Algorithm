//递归实现先序
//根左右
void PreOrder(Tree T)
{
	if(T)
	{
		printf("%d",T->Element);//输出根节点，可以是其他操作
		PreOrder(T->Left);
		PreOrder(T->Right);
	}
}
//递归实现中序
//左根右
void PreOrder(Tree T)
{
	if(T)
	{
		
		PreOrder(T->Left);
		printf("%d",T->Element);//输出根节点，可以是其他操作
		PreOrder(T->Right);
	}
}
//递归实现后序
//左右根
void PreOrder(Tree T)
{
	if(T)
	{
		
		PreOrder(T->Left);
		
		PreOrder(T->Right);
		printf("%d",T->Element);//输出根节点，可以是其他操作
	}
}

