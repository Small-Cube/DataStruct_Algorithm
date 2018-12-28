
// make empty
SearchTree MakeEmpty(SearchTree T)
{
	if(T!=NULL)
	{
		MakeEmpty(T->Left);
		MakeEmpty(T->Right);
		free(T);
	}
	return NULL;
}
// find X return Position of the Tree
Position Find(ElementType x,SearchTree T)
{
	if(T)
	{
		return NULL;
	}
	if(X>T->Right)
		return Find(X,T->Right);
	else
		if(X<T->Left)
			return Find(X,T->Left);
		else 
			return T;
}

//
Position FindMax(SearchTree T)
{
	if(T)
		return NULL;
	else 
		if(T->Right==NULL)
		return T;
	else 
		return FindMax(T->Right);
}
//
Position FindMin(SearchTree T)
{
	if(T)
		return NULL;
		while(T->Left!=NULL)
			T=T->Left;
	return T;
}

//
/*插入之前判断树是否为空，若为空建立新的节点储存要插入的元素的值，并且初始化节点的子节点指向NULL，结束返*****回T，若不为空递归查找X应插入的位置找到之后再插入*/
SearchTree Insert(ElementType X,SearchTree T)
{
	if(T=NULL)
	{
		T=malloc(sizeof(struct TreeNode));
		if(T==NULL)
			printf("OUR OF SPACE!!");
		else{
			T->ElementType =X;
			T->Left=NULL;
			T->Right=NULL;
			
		}
		
	}
	else if(X<T->ElementType)
		T->Left=Insert(X,T->Left);
	else if(X>T->ElementType)
		T->Right=Insert(X,T->Right);
	
	return T;
}
//
/*删除操作分两种情况，首先递归找到要删除的节点，如果该节点有两个子树，则用其右子树的最小值来代替该节点的****数据并递归的删除那个节点，因为右子树最小值不可能再有左儿子，此时双节点变成单节点,单节点的删除则用中****间变量记录删除的节点位置，改变指针，若无左子树则指向右子树若无右子树则指向左子树，free中间变量记录*******的位置*/
SearchTree Delete(ElementType X,SearchTree T)
{
	Position Tmpcell;
	if(T==NULL)
		printf("Element not found");
	else if(X>T->Right)
		T->Right=Delete(X,T->Right);
	else if(X<T->Left)
		T->Left=Delete(X,T->Left);
	else /*found element to be delete*/
		if(T->Left&&T->Right)
		{
			Tmpcell=FindMin(T->Right);
			T->Element=Tmpcell->Element;
			T->Right=Delete(T->Element,T->Right);
		}
	else /*one or zero children*/
	{
		Tmpcell=T;
		if(T->Left==NULL)
			T=T->Right;
		else if(T->Right==NULL)
			T=T->Left;
		
	}
	return T;
		
}