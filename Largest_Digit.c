#include<stdio.h>
int main()
{
    int n,l=0,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        n=n/10;
    if(l<rem)
    {
        l=rem;
    }
    }
    printf("%d",l);
}