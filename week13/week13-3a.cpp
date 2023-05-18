#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int t=(n/1000)%10;
	printf("%d",t);
	return 0;
}
