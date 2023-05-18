#include <stdio.h>
int main()
{
	int n,a=0;
	scanf("%d",&n);
	if(n%400==0) a=1;
	else if(n%100==0) a=0;
	else if(n%4==0) a=1;
	else a=0;

	if(a==1) printf("%d is a leap year.\n",n);
	else  printf("%d is not a leap year.\n",n);
}
