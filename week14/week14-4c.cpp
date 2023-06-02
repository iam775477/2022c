#include <stdio.h>
int main()
{
	int n,i,s=0;
	scanf("%d",&n);
	for(i=1;i<=(2*n+1);i+=2)
	{
		s+=i;
	}
	printf("f(%d)=%d",n,s);
}
