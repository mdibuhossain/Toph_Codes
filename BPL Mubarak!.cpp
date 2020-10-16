#include<stdio.h>
#include<string.h>
int main()
{
    int t, count, o, b;
    char s[110];
    scanf("%d\n",&t);
    for(int i = 1; i <= t; i++)
    {
        gets(s);
        count = 0;
        int j = 0;
        while(s[j]!='\0')
        {
            if(s[j]!='N' && s[j]!='W' && s[j]!='D')
                count++;
            j++;
        }
        if(count == 6) printf("1 OVER\n");
        else if(count<6)
        {
            if(count>1) printf("%d BALLS\n",count);
            else printf("%d BALL\n",count);
        }
        else if(count>6)
        {
            o = count/6;
            b = count%6;
            if(b == 0)
                printf("%d OVERS\n",o);
            else if(o>1 && b>1)
                printf("%d OVERS %d BALLS\n",o,b);
            else if(o<2 && b<2)
                printf("%d OVER %d BALL\n",o,b);
            else if(o>1 && b<2)
                printf("%d OVERS %d BALL\n",o,b);
            else if(o<2 && b>1)
                printf("%d OVER %d BALLS\n",o,b);
        }
    }
    return 0;
}