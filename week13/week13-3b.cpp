#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int ans=0;
	for(i=1;i<=n;i++)
	{
		ans+=i*i;
	}
	printf("%d",ans);
}
