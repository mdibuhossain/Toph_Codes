#include<stdio.h>
int main()
{
int c,count_s1[26]={0}, count_s2[26]={0};
    char s1[100], s2[100];
    gets(s1);
    gets(s2);
    for (int i = 0; s1[i]!='\0'; i++)
    {
        count_s1[s1[i]-'a']++;
    }
    for (int i = 0; s2[i]!='\0'; i++)
    {
        count_s2[s2[i]-'a']++;
    }
    for (int i = 0; i < 25; i++)
    {
        if (count_s1[i]!=count_s2[i])
        {
            c = 1;
            break;
        }
        else
            c = 0;
    }
    if (c) printf("No\n");
    else printf("Yes\n");
    return 0;
}