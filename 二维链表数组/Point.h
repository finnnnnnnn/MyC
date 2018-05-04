#include <math.h>
typedef struct {float x;float y;}point;
float distance(point a,point b)
{
    float dx=a.x-b.x,dy=a.y-b.y;
    return sqrt(dx*dx+dy*dy);
}
