#include<stdio.h>
int main()
{
	int t, f=0;
	scanf("%d",&t);
	char s[t];
	scanf("%s",&s);
	for(int i = 1; i<=t-1; i++)
	{
		if(s[i-1]==s[i])
			f = 1;
	}
	if(f) printf("Change needed\n");
	else printf("No change needed\n");
}