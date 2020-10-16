#include<stdio.h>
int main()
{
	int t,a,b,c,d;
	scanf("%d",&t);
	for (int i = 1; i <=t; ++i)
	{
		scanf("%d%d",&a,&b);
		c = a+b;
		d = a-b;
		printf("Case %d: %d%d\n",i,c,d);
	}
	return 0;
}