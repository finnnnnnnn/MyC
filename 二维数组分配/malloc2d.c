int **malloc2d(int r,int c)
{
    int i;
    int **t=malloc(r*(sizeof(int *)));
    for(i=0;i<c;i++)
        t[i]=malloc(c*(sizeof(int)));
    return t;
}
