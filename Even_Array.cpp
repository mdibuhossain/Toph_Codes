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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> vt;
        int n, even_len, odd_len, x, y, value, fault, good;
        even_len = odd_len = fault = good = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> value;
            vt.push_back(value);
        }
        for (int i = 0; i < vt.size(); i++)
        {
            if (i % 2 == 0) // if i even
            {
                if (vt[i] % 2 == 0) // if vt[i] even
                {
                    good++;
                    even_len++;
                }
                else // if vt[i] odd
                {
                    fault++;
                    odd_len++;
                }
            }
            else // if i odd
            {
                if (vt[i] % 2 == 0) // if vt[i] even
                {
                    fault++;
                    even_len++;
                }
                else // if i odd
                {
                    good++;
                    odd_len++;
                }
            }
        }
        // cout << "Even_count: " << even_len << endl
        //      << "Odd_count: " << odd_len << endl
        //      << "Good: " << good << endl
        //      << "Wrong: " << fault << endl;
        if ((n % 2 == 0) && (even_len == odd_len))
        {
            cout << (fault / 2) << endl;
        }

        else if ((n % 2 != 0) && (even_len == (n / 2) + 1) && (odd_len == (n / 2)))
        {
            cout << (fault / 2) << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}