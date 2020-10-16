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
    long long m, n;
    while (1)
    {
        long long bucket_count, total_lichi, a, b;
        scanf("%lld%lld", &m, &n);
        if (m == 0 && n == 0)
        {
            break;
        }
        else
        {
            bucket_count = (n - m) + 1;
            a = m * bucket_count;
            b = (bucket_count * (bucket_count - 1)) / 2;
            total_lichi = a + b;
            printf("%lld %lld\n", bucket_count, total_lichi);
        }
    }
    return 0;
}