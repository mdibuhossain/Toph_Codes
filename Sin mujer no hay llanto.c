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
int cal(int n, int d)
{
    if (n == 1)
        return 1;
    if (n % 2 == 1)
    {
        return cal(n - 1, d) + (n - 1) * d;
    }
    else
    {
        return cal(n - 1, d) - (n - 1) * d;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, d;
        long long sum = 0;
        scanf("%d%d", &n, &d);
        for (int i = 1; i <= n; i++)
        {
            int x = cal(i, d);
            sum += x;
        }
        printf("%lld\n", sum);
    }
    return 0;
}