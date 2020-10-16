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
        int zero = 0, n, k, count = 0;
        cin >> n >> k;
        getchar();
        string st;
        vector<string> store;
        cin >> st;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == '0')
            {
                zero++;
            }
            else
            {
                if (zero >= k * 2)
                {
                    count += (zero / k) - 1;
                    zero = 0;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}