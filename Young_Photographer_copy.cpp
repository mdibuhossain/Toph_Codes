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
#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    int n, p, div = 2000, x, y, mini, maxi;
    cin >> n >> p;
    cin >> x >> y;
    if (x > y)
    {
        swap(x, y);
        mini = x;
        maxi = y;
    }
    else
    {
        mini = y;
        maxi = x;
    }

    for (int i = 1; i <= (n - 1); i++)
    {
        cin >> x >> y;
        if (x > y)
            swap(x, y);
        if ()
        {
            /* code */
        }
        
    }

    return 0;
}