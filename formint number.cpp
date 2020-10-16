#include<stdio.h>
#include<string.h>
char s[200000000];
int main()
{
    int len;
    scanf("%s",&s);
    len = strlen(s);
    if (len<=3)
    {
        if (len==3)
            printf("%c%c%c\n",s[0],s[1],s[2]);
        else if (len==2)
            printf("%c%c\n",s[0],s[1]);
        else printf("%c\n",s[0]);
    }
    else if (len<=6)
    {
        if (len==6)
            printf("%c%c%c,%c%c%c\n",s[0],s[1],s[2],s[3],s[4],s[5]);
        else if(len==5)
            printf("%c%c,%c%c%c\n",s[0],s[1],s[2],s[3],s[4]);
        else if (len==4)
            printf("%c,%c%c%c\n",s[0],s[1],s[2],s[3]);
    }
    else
    {
        if (len==9)
            printf("%c%c%c,%c%c%c,%c%c%c\n",s[0],s[1],s[2],s[3],s[4],s[5],s[6],s[7],s[8]);
        else if (len==8)
            printf("%c%c,%c%c%c,%c%c%c\n",s[0],s[1],s[2],s[3],s[4],s[5],s[6],s[7]);
        else if(len==7)
            printf("%c,%c%c%c,%c%c%c\n",s[0],s[1],s[2],s[3],s[4],s[5],s[6]);
    }
    return 0;
}