#include"AVLTree.h"

//其实平衡树需要的是高度差信息。这样做可以避免平衡因子的重复计算
//但是丧失了一些简明性。最后的程序很容易比只存储高度复杂。
static int Height(Position P)
{
	if (P == NULL)
		return -1;
	else
		return P->Height;
}

//
//函数前加static将使这个函数只能在本文件内部调用适用于LL
//                 K2            K1
//                /     变成       \ 
//               K1                 K2  
//
static Position SingleRotateWithRight(Position K2)
{
	Position K1;
	K1=K2->left;
	K2->left=K1->right;
	K1->right=K2;
	
	//计算树高
	K1->Height=MAX(Height(K1->left),Height(K1->right))+1;
	K2->Height=MAX(Height(K2->left),Height(K2->right))+1;
	
	return K1;
	

}
//
//函数前加static将使这个函数只能在本文件内部调用适用于RR
//       	K2               K1
//            \    变成     / 
//             K1           K2
//
static Position SingleRotateWithRight(Position K2)
{
	Position K1;
	K1=K2->right;
	K2->rihght=K1->left;
	K1->left=K2;
	
	//计算树高
	K1->Height=MAX(Height(K1->left),Height(K1->right))+1;
	K2->Height=MAX(Height(K2->left),Height(K2->right))+1;
	
	return K1;
	
}
//
//双旋转先右再左适用于LR
//          K3                    K3                        K1 
//         /                     /                         /  \
//        K2      右转变成      K1   在左转变成           K2   K3
//          \                  /  
//           K1               K2 
static Position DoubleRotateWithLeft(Position K3)
{   
    
	K3->left = SingleRotateWithRight(K3->left);
	return SingleRotateWithLeft(K3);
}
//双旋转先左后右适用于RL型
//
//          K3                    K3                          K1 
//            \                     \                        /  \
//             K2   左转变成         K1  再右转变成         K3   K2
//            /                        \  
//           K1                         K2 
static Position DoubleRotateWithRight(Position K3)
{
	K3->right = SingleRotateWithLeft(K3->right);
	return SingleRotateWithRight(K3);
}
//插入节点跟二叉树不同的是插入要考虑树的平衡性问题
AVLTree Insert(ElementType X,AVLTree T)
{
	//递归实现插入
	if(T==NULL)
	{
		T=malloc(struct AVLNode);
		if(T==NULL)
			printf("out of space!");
		else 
		{
			T->Element=X;
			T->left=NULL;
			T->right=NULL;
		}
	}
		
		else if(X<T->Element)
		{
			T->left=Insert(X,T->left);
			if(Height(T->left)-Height(T->right)==2) //左子树比右子树高
			{
				if(X<T->left->Element)
					T=SingleRotateWithRight(T);     //LL型  右转
				else 
					T=DoubleRotateWithRight(T);     //LR型需要先右转再左转
			}
		}
		else if(X>T->Element)
		{
			T->right=Insert(X,T->right);
			if(Height(T->right)-Height(T->left)==2)  
			{
				if(X>t->right->Element)
					T=SingleRotateWithLeft(T);   //RR 左转
				else
					T=DoubleRotateWithLeft(T);   //RL  先左转再右转
			}
		}
	
		T->Height=MAX(Height(T->left),Height(T->right))+1;
		
		return T;     //返回根节点
	
}