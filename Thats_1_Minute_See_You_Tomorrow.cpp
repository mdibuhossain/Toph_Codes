#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n, m, flag = 0, sum = 0;
	cin >> n >> m;
	int L[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> L[i];
		if(L[i] >= m) sum += m;
		else flag = 1;
	}
	if(flag || sum > 60)
		cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}