#include <stdio.h>
int main()
{
	int i,a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=10-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}



}
