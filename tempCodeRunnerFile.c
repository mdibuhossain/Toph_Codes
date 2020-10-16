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
int UnionSort(int n, int m, int a1[n + 1], int a2[m + 1])
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a1[i] < a2[j])
            printf("%d ", a1[i++]);
        else if (a1[i] > a2[j])
            printf("%d ", a2[j++]);
        else
            {printf("%d ", a1[i++]); j++;}
    }

    while (i < n)
        printf("%d ", a1[i++]);
    while (j < m)
        printf("%d ", a2[j++]);
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a1[n + 1], a2[m + 1];
    for (int i = 0; i < n; i++)
        scanf("%d", &a1[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &a2[i]);
    UnionSort(n, m, a1, a2);
    return 0;
}