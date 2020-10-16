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
int main()
{
    int a, b, i, c = 0;
    int ar1[7], ar2[7];
    scanf("%d%d", &a, &b);
    for (i = 0; (a != 0 && b != 0); i++)
    {
        if (a != 0)
        {
            ar1[i] = a % 10;
            a = a / 10;
        }
        if (b != 0)
        {
            ar2[i] = b % 10;
            b = b / 10;
        }
    }
    i -= 1;
    while (i >= 0)
    {
        if (ar1[i] + ar2[i] >= 10)
        {
            c = 1;
            break;
        }
        i--;
    }
    if (c)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}