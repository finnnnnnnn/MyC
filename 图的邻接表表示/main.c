#include <stdio.h>
#include <stdlib.h>
typedef struct node *link;
struct node
{ int v;link next; };
link new(int v,link next)
{
    link x=malloc(sizeof *x);
    x->v=v; x->next=next;
    return x;
}
void main(int argc,char *argv[])
{
    int V=atoi(argv[1]),i,j;
    link adj[V];
    for(i=0;i<V;i++) adj[i]=NULL;
    while(scanf("%d %d\n",&i,&j)==2)
    {
        adj[j]=new(i,adj[j]);
        adj[i]=new(j,adj[i]);
    }
    for(i=0;i<V;i++)
    {
        printf("%d:",i);
        while(adj[i]!=NULL)
         {
            printf("%d ",adj[i]->v);
            adj[i]=adj[i]->next;
        }
        printf("\n");
    }
}
