#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct {float x;float y;} point;
float distance(point a,point b)
{
    float dx=a.x-b.x,dy=a.y-b.y;
    return sqrt(dx*dx+dy*dy);
}
float randFloat()
{return 1.0*rand()/RAND_MAX;}
void main(int argc,char *argv[])
{
    int i,j,cnt=0,N=atoi(argv[1]);
    float d=atoi(argv[2]);
    point *a=malloc(N*(sizeof(*a)));
    for(i=0;i<N;i++)
    {
        a[i].x=randFloat();a[i].y=randFloat();
    }
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
            if(distance(a[i],a[j])<d) cnt++;
    }
    printf("%d edges shorter than %f\n",cnt,d);
}
