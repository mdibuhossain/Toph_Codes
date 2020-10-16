#include<stdio.h>
int main()
{
	int n,in_,avg,count = 0;
	double avg_f;
	scanf("%d",&n);
	for (float i = 1; i <= n; i++)
	{
		scanf("%d",&in_);
		count = count + in_;
		avg = count/i;
		avg_f = count/i;
		if (avg == avg_f)
		{
			printf("%d\n",avg);
		}
		else
			printf("%0.10lf\n",avg_f);
	}
	return 0;
}