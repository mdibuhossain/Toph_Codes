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
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long a, b, gcd, lcm, add, final, max, min;
        scanf("%lld%lld", &a, &b);
        (a > b) ? (max = a, min = b) : (max = b, min = a);
        long long mod = max % min;
        if (mod == 0)
        {
            gcd = min;
        }
        else if (mod != 0 && max % 2 == 0 && min % 2 == 0)
        {
            gcd = 2;
        }
        else if (mod != 0 && max % 2 != 0 && min % 2 != 0)
        {
            gcd = 1;
        }
        else if (mod != 0 && max % 2 != 0 && min % 2 == 0)
        {
            gcd = 1;
        }
        else if (mod != 0 && max % 2 == 0 && min % 2 != 0)
        {
            gcd = 1;
        }
        printf("GCD = %lld\n", gcd);
        lcm = (a * b) / gcd;
        printf("LCM = %lld\n", lcm);
        add = a + b;
        final = lcm + gcd;
        printf("%lld\n", final);
        if (final == add)
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
    }
    return 0;
}