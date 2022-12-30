#include<stdio.h>
int main()
{
	int n,Min=0,Hour=0;
  scanf("%d",&n);
  Min=n%60;
  Hour=n/60;
  printf("%d Hour(s) %d Minute(s)",Hour,Min);
  return 0;
}