#ifndef SEARCH_TREE_H
#define SEARCH_TREE_H
struct TreeNode;
typedef struct TreeNode *Position;
typedef struct TreeNode *SearchTree; 

SearchTree MakeEmpty(SearchTree T);
Position Find(ElementType x,SearchTree T);
Position FindMin(SearchTree T);
Position FindMax(SearchTree T);
SearchTree Insert(ElementType X,SearchTree T);
SearchTree Delete(ElementType X,SearchTree T);



struct TreeNode{
	ElementType Element;//key
	SearchTree Left;//left tree
	SearchTree Right;//right tree
}


#endif