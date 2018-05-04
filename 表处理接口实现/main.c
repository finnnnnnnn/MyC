#include <stdio.h>
#include "list.c"
void main()
{
    initNodes(5);
    while (freelist!=NULL)
    {
    printf("%d\n",freelist->item);
    freelist=freelist->next;
    }
}
