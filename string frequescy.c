/***********************************************************************\
|      _____   ____    _____               _    _   _____   __  __      |
|     |_   _| |  _ \  |  __ \      /\     | |  | | |_   _| |  \/  |     |
|       | |   | |_) | | |__) |    /  \    | |__| |   | |   | \  / |     |
|       | |   |  _ <  |  _  /    / /\ \   |  __  |   | |   | |\/| |     |
|      _| |_  | |_) | | | \ \   / ____ \  | |  | |  _| |_  | |  | |     |
|     |_____| |____/  |_|  \_\ /_/    \_\ |_|  |_| |_____| |_|  |_|     |
|                                                                       |
|                   COMPUTER SCIENCE AND ENGINEERING                    |
|  Bangabandhu Sheikh Mujibur Rahman Science and Technology University  |
\***********************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char s[10005];
int main()
{
    char c;
    int a[10001], i, j, k = 0, count = 0, n;
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        gets(s);
        n = strlen(s);
        for (i = 0; i < n; i++)
        {
            a[i] = 0;
            count = 1;
            if (s[i])
            {
                for (j = i + 1; j < n; j++)
                {
                    if (s[i] == s[j])
                    {
                        count++;
                        s[j] = '\0';
                    }
                }
            }
            a[i] = count;
            if (count >= k)
                k = count;
        }
        for (j = 0; j < n; j++)
        {
            if (a[j] == k)
            {
                c = s[j];
            }
        }
        printf("%d\n", n - k);
        for (int i = 0; i < n; i++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}