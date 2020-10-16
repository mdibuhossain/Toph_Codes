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
    for (int i = 1; i <= t; i++)
    {

        string st;
        cin >> st;
        map<char, int> mp;
        map<char, int> xx;
        for (int j = 0; j < st.size(); j++)
        {
            mp[st[j]]++;
            xx[st[j]] = 1;
        }
        printf("Case #%d:\n", i);
        for (int j = 0; j < st.size(); j++)
        {
            if (xx[st[j]])
            {
                cout << st[j] << " " << mp[st[j]] << endl;
                xx[st[j]] = 0;
            }
        }
    }
    return 0;
}