//
// Created by facet on 2018/3/14.
//


#include <stdio.h>
#include <stdlib.h>
#include "reverselist.h"


#ifdef TestRead
List Read()
{
    int length=0;
#ifdef Debug
    printf("Read() is running....\n");
#endif
    scanf("%d", &length);
#ifdef Debug
    printf("The length is :%d\n", length);

#endif
    PtrToNode header=NULL;
    header =(PtrToNode)malloc(sizeof(struct Node));
    if(!header)return 0;
    header->Data=0;
    header->Next=NULL;//header node details
#ifdef Debug
    printf("header is processing .....\n");

#endif
    ElementType num=0;//global for temp scanf
    PtrToNode tempheader=header;//global for the created header in every cycle
    while (length>0){
#ifdef Debug
        printf("while is processing...\n");
#endif
        PtrToNode oldnode =(PtrToNode)malloc(sizeof(struct Node));
        if(!oldnode)return 0;
        scanf("%d",&num);
#ifdef Debug
        printf("oldnode is processing ...\n");
#endif
        oldnode->Data=num;
        tempheader->Next=oldnode;
        tempheader=oldnode;
        tempheader->Next=NULL;
        length--;
    }
    return header;
}

#endif //TestRead

//#undef TestReverse
#ifdef TestReverse
List Reverse(List L)
{
    PtrToNode pnode = L->Next;
    PtrToNode tempnode = NULL;
    PtrToNode qnode=NULL;
    PtrToNode lastnode=L->Next;
    int counter=0;
    while(pnode){
        qnode=pnode->Next;
        pnode->Next=tempnode;
        tempnode=pnode;
        pnode=qnode;
        counter++;
#ifdef Debug
        printf("the counter is %d\n", counter);
#endif
    };
    L->Next=tempnode;
    lastnode->Next=NULL;
    return L;
}

#endif //TestReverse

#ifdef TestPrint

void Print(List L)
{
    while (L->Next){
#ifdef Debug
        printf("Print() is running...");
#endif
        printf("%d\n ",L->Next->Data);
        L=L->Next;
    }
}

#endif  //TestPrint
