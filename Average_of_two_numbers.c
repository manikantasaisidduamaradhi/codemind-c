#include <stdio.h>
int main()
{
    int n1,n2;
    float avg;
    scanf("%d%d",&n1,&n2);
    avg=(float)(n1+n2)/2;
    printf("Average of %d and %d is: %.2f",n1,n2,avg);
    return 0;
}