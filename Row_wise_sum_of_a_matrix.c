#include<stdio.h>
int main()
{
    int i,j,r,c,a[10][10],Sum;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        Sum = 0;
        for(j=0;j<c;j++)
        {
            Sum=Sum+a[i][j];
        }
        printf("%d ",Sum);
    }
}