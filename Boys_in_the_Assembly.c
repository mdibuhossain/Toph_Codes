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
int main()
{
    long long n, r;
    scanf("%lld%lld", &n, &r);
    long long mod = r % n;
    long long ar[n];
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    if (n == r)
    {
        printf("%lld %lld", ar[0], ar[n - 1]);
    }
    else if (r == 0)
    {
        printf("%lld %lld\n", ar[0], ar[n - 1]);
    }
    else
    {
        printf("%lld %lld\n", ar[mod], ar[mod - 1]);
    }
    return 0;
}