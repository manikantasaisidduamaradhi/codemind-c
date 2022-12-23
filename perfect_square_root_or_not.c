#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	float x;
	scanf("%d",&n);
	x=sqrt(n);
	m=x;
	if(x==m)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}