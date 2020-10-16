#include<stdio.h>
int main()
{
    int t, n;
    float x, avg;
    scanf("%d",&t);
    for(int i = 1; i<=t; i++)
    {
        scanf("%d",&n);
        avg = 0;
        for(int j = 1; j<=n; j++)
        {
            scanf("%f",&x);
            avg += x;
        }
        printf("Case %d: %0.3f\n",i,avg/(float)n);
    }
    return 0;
}