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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string st;
    while (cin >> st)
    {
        int low = 0, up = 0, dig = 0, count = 0;
        for (int i = 0; i < st.size(); i++)
        {
            if (islower(st[i]))
                low = 1;
            else if (isupper(st[i]))
                up = 1;
            else if (isdigit(st[i]))
                dig = 1;
            if (dig and low and up)
            {
                count++;
                dig = low = up = 0;
            }
        }
        cout << count << endl;
    }
    return 0;
}