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
// #include <bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        if (a[0] >= a[1] && a[0] >= a[2])
        {
            if (a[0] > a[1] && a[0] > a[2])
                printf("Case %d: A\n", i);
            else
                printf("Case %d: Confused\n", i);
        }
        else if (a[1] >= a[0] && a[1] >= a[2])
        {
            if (a[1] > a[0] && a[1] > a[2])
                printf("Case %d: B\n", i);
            else
                printf("Case %d: Confused\n", i);
        }
        else if (a[2] >= a[1] && a[2] >= a[0])
        {
            if (a[2] > a[1] && a[2] > a[0])
                printf("Case %d: C\n", i);
            else
                printf("Case %d: Confused\n", i);
        }
    }
    return 0;
}