#include<stdio.h>
#include<string.h>
char st[100];
int main()
{
	int len,i,c=0;
	scanf("%s",&st);
	len = strlen(st);
	for (int i = 0; i < len; i++)
	{
		if (st[i] != st[len-i-1])
		{
			c = 1;
			break;
		}
	}
	if(c) printf("No\n");
	else printf("Yes\n");
	return 0;
}