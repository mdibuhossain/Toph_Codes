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
    string st;
    int t;
    cin >> t;
    while (t--)
    {
        string st;
        cin >> st;
        // cout << st[0];
        // for (int i = 1; i < st.size(); i += 2)
        // {
        //     cout << st[i];
        // }
        // cout << endl;
        cout << st[0];
        for (int i = 1; i < st.size(); i++)
        {
            if (st[i] != st[i + 1])
            {
                cout << st[i];
            }
            else if (st[i] == st[i + 1])
            {
                cout << st[i];
                i++;
            }
        }
        cout << endl;
    }
    return 0;
}