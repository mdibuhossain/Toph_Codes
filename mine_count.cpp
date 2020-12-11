#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int cnt = 0;
	string st;
	cin >> st;
	int len = st.size();
	for (int i = 0; i < len; ++i)
		if(st[i] == 'm') cnt++;
	for (int i = 1; i < len; ++i)
	{
		cin >> st;
		for (int i = 0; i < len; ++i)
			if(st[i] == 'm') cnt++;
	}
	cout << cnt << endl;
	return 0;
}