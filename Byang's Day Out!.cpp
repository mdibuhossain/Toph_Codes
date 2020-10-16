#include<stdio.h>
int main()
{
    int t, a, b, c, max;
    scanf("%d",&t);
    for (int i = 1; i <=t; ++i)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>=b && a>=c) max = a;
        else if(b>=a && b>=c) max = b;
        else if(c>=a && c>=b) max = c;
        if(max == a)
        {
            if(max<=(b+c)) printf("Yes\n");
            else printf("No\n");
        }
        else if(max == b)
        {
            if(max<=(a+c)) printf("Yes\n");
            else printf("No\n");
        }
        else if(max == c)
        {
            if(max<=(b+a)) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}