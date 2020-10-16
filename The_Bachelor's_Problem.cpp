/*
 ██▓ ▄▄▄▄    ██▀███   ▄▄▄       ██░ ██  ██▓ ███▄ ▄███▓
▓██▒▓█████▄ ▓██ ▒ ██▒▒████▄    ▓██░ ██▒▓██▒▓██▒▀█▀ ██▒
▒██▒▒██▒ ▄██▓██ ░▄█ ▒▒██  ▀█▄  ▒██▀▀██░▒██▒▓██    ▓██░
░██░▒██░█▀  ▒██▀▀█▄  ░██▄▄▄▄██ ░▓█ ░██ ░██░▒██    ▒██ 
░██░░▓█  ▀█▓░██▓ ▒██▒ ▓█   ▓██▒░▓█▒░██▓░██░▒██▒   ░██▒
░▓  ░▒▓███▀▒░ ▒▓ ░▒▓░ ▒▒   ▓▒█░ ▒ ░░▒░▒░▓  ░ ▒░   ░  ░
 ▒ ░▒░▒   ░   ░▒ ░ ▒░  ▒   ▒▒ ░ ▒ ░▒░ ░ ▒ ░░  ░      ░
 ▒ ░ ░    ░   ░░   ░   ░   ▒    ░  ░░ ░ ▒ ░░      ░   
 ░   ░         ░           ░  ░ ░  ░  ░ ░         ░   
          ░                                           
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t; cin >>t;
    for (int i = 1; i <= t; i++)
    {
        int f_m = 0, s_m = 0, f_b = 0, s_b = 0, x;
        for (int i = 0; i < 6; i++)
        {
            int n; cin >> n;
            f_m += n;
        }
        cin >> f_b;
        for (int i = 0; i < 6; i++)
        {
            int n; cin >> n;
            s_m += n;
        }
        if(f_m >= f_b)
        {
            x = f_m - f_b;
            s_b = s_m + x;
        }
        else
        {
            x = f_b - f_m;
            s_b = s_m - x;
        }
        printf("Case %d: %d\n", i, s_b);
    }
    return 0;
}