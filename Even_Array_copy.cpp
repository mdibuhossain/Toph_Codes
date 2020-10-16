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
        int n, k;
        vector<int> st;
        vector<int> st_even;
        vector<int> st_odd;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            st.push_back(k);
            if (i & 1) // if i odd
            {
                if (st[i] % 2 == 0) // if i th value not odd
                    st_odd.push_back(st[i]);
            }
            else // if i even
            {
                if (st[i] & 1) // if i the value not even
                    st_even.push_back(st[i]);
            }
        }
        if (!st_even.size() && !st_odd.size())
            cout << "0" << endl;
        else if (st_even.size() == st_odd.size())
            cout << (st_even.size() + st_odd.size()) / 2 << endl;
        else
            cout << "-1" << endl;
        st_even.clear();
        st_odd.clear();
        st.clear();
    }
    return 0;
}