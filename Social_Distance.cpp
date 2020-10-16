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
        int n, k, pos1 = 0, pos2 = 0, dif = 0, count = 0, zero = 0;
        string st;
        cin >> n >> k;
        getchar();
        cin >> st;
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == '1')
            {
                if (zero >= k * 2)
                {
                    count += (zero / k) - 1;
                    zero = 0;
                }
                pos1 = i + 1;
                for (int j = pos1 + 1; j < st.size(); j++)
                {
                    if (st[j] == '1')
                    {
                        pos2 = j + 1;
                        dif = pos2 - pos1;
                        if (dif >= k + 1)
                        {
                            count += (dif / (k + 1)) - 1;
                        }
                        break;
                    }
                }
            }
            else if (st[i] == '0')
            {
                zero++;
            }
        }
        cout << count << endl;
    }
    return 0;
}