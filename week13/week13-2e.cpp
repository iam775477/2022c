#include <stdio.h>
int main()
{
	int n=0,ans=0,i,t,a[20];
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		{
			n=i;
			break;
		}
	}
	scanf("%d",&t);
	for(i=0;i<n;i++)
	{
		if(a[i]==t) ans++;
	}
	printf("%d\n",ans);
}
