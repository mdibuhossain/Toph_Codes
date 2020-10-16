#include<stdio.h>
#include<string.h>
char ar1[1000000],ar2[1000000];
int main(int argc, char const *argv[])
{
    int len1, len2;
    int sum;
    scanf("%s%s",&ar1,&ar2);
    len1 = strlen(ar1);
    len2 = strlen(ar2);
    for (int i = 1; i <=3; ++i)
    {
        sum = (int)ar1[i]+(int)ar2[i];
        printf("%d\n",sum);
    }
    return 0;
}