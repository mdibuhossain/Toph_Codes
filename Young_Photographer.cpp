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
    int n, p, div = 2000, a, b;
    cin >> n >> p;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (abs(x - y) < div)
        {
            div = abs(x - y);
            if (x > y)
            {
                a = y;
                b = x;
            }
            else
            {
                a = x;
                b = y;
            }
        }
    }
    if (p <= b and p >= a)
    {
        cout << "0" << endl;
    }

    if (p < a)
    {
        cout << (a - p) << endl;
    }
    else if (p > b)
    {
        cout << (p - b) << endl;
    }
    return 0;
}