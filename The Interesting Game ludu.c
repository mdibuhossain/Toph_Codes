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
        int n, k, mina, raju;
        scanf("%d%d", &n, &k);
        mina = raju = 0;
        for (int i = 1; i <= n; i++)
        {
            int a;
            scanf("%d", &a);
            if (i & 1) // if even
            {
                mina += a;
                // raju += a;
            }
            else // odd
            {
                raju += a;
                // mina += a;
            }
        }
        if ((mina < k) && (raju < k))
        {
            printf("Mithu Win\n");
        }
        else if ((mina > raju) && (mina >= k))
        {
            printf("Mina Win\n");
        }
        else if ((mina < raju) && (raju >= k))
        {
            printf("Raju Win\n");
        }
        else if ((mina == raju) && (mina >= k))
        {
            printf("Mina Win\n");
        }
    }
    return 0;
}