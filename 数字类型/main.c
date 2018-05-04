#include <stdlib.h>
#include <math.h>
#include <stdio.h>
typedef int Number;
Number randNum()
{return rand();}
void main(int argc,char *argv[])
{
    int i,N=atoi(argv[1]);
    float m1=0.0,m2=0.0;
    Number x;
    for(i=0;i<N;i++)
    {
        x=randNum();
        m1+=((float)x)/N;
        m2+=((float)x*x)/N;
    }
    printf("      Average: %1f\n",m1);
    printf("Std.deviation: %1f\n",sqrt(m2-m1*m1));
}
