#include<stdio.h>
#include<string.h>
int main()
{
    char s1[51];
    int t, len, n;
    scanf("%d",&t);
    for (int i = 0; i < t; ++i)
    {
    	scanf("%s",&s1);
    	scanf("%d",&n);
    	len = strlen(s1);
    	for (int i = 0; i < len; ++i)
    	{
    		s1[i] = s1[i] - n;
    		if (/* condition */)
    		{
    			/* code */
    		}
    		printf("%c",s1[i]-n);
    	}
	}
    return 0;
}