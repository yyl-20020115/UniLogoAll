#ifndef __AVLTREE_H__
#define __AVLTREE_H__

struct NODE;

typedef long (*NODE_COMPARE_FUNCTION) (
    NODE * NodeA,
    NODE * NodeB
    );

typedef void (*PLIST_EACH_FUNCTION) (
    void * Context,
    NODE * Key,
    NODE * Value
    );

// function declarations
NODE *
AvlTreeSearch(
    NODE                  * AvlNode,
    NODE_COMPARE_FUNCTION   CompareFunction,
    NODE                  * SearchKey
    );

void
AvlTreeInsert(
    NODE                  ** RootNodePtr,
    NODE_COMPARE_FUNCTION    CompareFunction,
    NODE                  *  Key,
    NODE                  *  Value
    );

void
AvlTreeDelete(
    NODE                  ** RootNodePtr,
    NODE_COMPARE_FUNCTION    CompareFunction,
    NODE                  *  Key
    );

void
AvlTreeEach(
    NODE                  *  RootNode,
    void *                   Context,
    PLIST_EACH_FUNCTION      ForEachFunction
    );

NODE *
AvlTreeFlatten(
    NODE                  * AvlNode
    );

#endif
