//
// Created by facet on 2018/3/20.
//

#include "reverselist.h"
#include <stdio.h>
#include <stdlib.h>

#ifdef PTA_REVERSELIST_H
int main()
{
    List L1, L2;
    L1= Read();
#ifdef Debug
    printf("L1 returned...\n");
#endif
    Print(L1);
#ifdef Debug
    printf("L2 is going to processing...\n");
#endif
    L2 = Reverse(L1);
//    Print(L1);
    Print(L2);
    return 0;
}
#endif