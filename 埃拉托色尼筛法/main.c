#include <stdio.h>
#define N 1000
void main()
{
    int i,j,a[N];
    for(i=2;i<N;i++)
    {    a[i]=1;}
    for(i=2;i<N;i++)
    {
        if (a[i])
        {
            for(j=i;j*i<N;j++)
            {    a[j*i]=0;}
    }

    }
    for(i=2;i<N;i++)
    {
        if(a[i])
            printf("%4d",i);
    }
}
