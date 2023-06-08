#include<stdio.h>
int main()
{
	long long int a,b;

	while( scanf("%d%d",&a,&b) == 2)
	{
		long long int ans=b-a;
		if(ans<0)ans=a-b;

		printf("%lld\n",ans);

	}



}
