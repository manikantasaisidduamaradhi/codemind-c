#include<stdio.h>
int main()
{
    long int t,a,b,i,n;
    scanf("%ld",&t);
    while(t>0)
    {
        scanf("%ld%ld",&a,&b);
        n=-1;
        for(i=0;i<=b;i++)
        {
            if((i*i)%b==a)
            {
                n=i;
                break;
            }
        }
        printf("%ld
",n);
        t--;
    }
}