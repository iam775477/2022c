#include <stdio.h>
int main()
{
	int a[100];
	int N,i;
	scanf("%d",&N);

	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=N-1;i>=0;i--)
	{
		if(a[i]%2==1) printf("%d ",a[i]);
	}
}
