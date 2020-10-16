#include<stdio.h>
#include<math.h>
int main()
{
	long long n, t, count;
	scanf("%lld",&t);
	for(int i = 1; i<=t; i++)
	{	
		scanf("%lld",&n);
		count = 0;
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n%i == 0)
			{
				count = 1;
				break;
			}
		}
		if (count != 1 && n!=1)
			printf("Prime\n");
		else printf("Not Prime\n");
	}
	return 0;
}