#include <stdio.h>
int main()
{
	int n,i,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&temp);
		printf("%d,",temp*temp);
	}
	printf("\n");
}
