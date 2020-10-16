#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int t,x,y,len,count;
	scanf("%d",&t);
	for (int k = 1; k<=t; k++)
	{
		count = 0;
		scanf("%d%d",&x,&y);
		for (int i = x; i <= y; i++)
		{
			for (int j = 2; j <= sqrt(x); j++)
			{
				if (x%j==0)
				{
					break;
				}
				else
					count++;
			}
		}
	printf("%d\n",count);
	}
	return 0;
}