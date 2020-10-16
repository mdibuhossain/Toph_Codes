#include<stdio.h>
int main()
{
	int a,fr=0;
	scanf("%d",&a);
	for (int i = 1; i < a; i++)
	{
		if (a%i==0)
		{
			fr++;
		}
	}
	printf("%d\n",fr);
	return 0;
}