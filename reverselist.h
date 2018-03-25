//
// Created by facet on 2018/3/14.
//

#ifndef PTA_REVERSELIST_H
#define PTA_REVERSELIST_H
//#define Debug
#define TestRead
#define TestPrint
#define TestReverse
typedef struct Node *PtrToNode;
typedef int ElementType;
struct Node {
    ElementType Data;
    PtrToNode Next;
};
typedef PtrToNode List;

List Read();
void Print( List L );

List Reverse( List L );





#endif //PTA_REVERSELIST_H
