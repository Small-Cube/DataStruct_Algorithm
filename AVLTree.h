#ifndef _AVLTree_H
typedef int ElementType;
struct AVLNode;
typedef struct AVLNode *Position;
typedef  struct AVLNode *AVLTree;
AVLTree MakeEmpty(AVLTree T);
Position Find(ElementType x, AVLTree T);
Position FindMax(AVLTree T);
Position FindMin(AVLTree T);
AVLTree Insert(ElementType x, AVLTree T);
AVLTree Delete(ElementType x, AVLTree T);
ElementType Retrieve(Position p);
Position SingleRotateWriteLeft(Position K2);
Position SingleRotateWriteRight(Position K2);



struct AVLNode
{
	ElementType Element;
	AVLTree left;
	AVLTree right;
	int Height;
};
#endif