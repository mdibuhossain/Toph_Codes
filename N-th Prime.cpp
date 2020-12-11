#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define READ()	freopen("input", "r", stdin)
// #include<bits/stdc++.h>
vector<int>primes;
bool prm[100000000];
// bool isPrime(int n)
// {
// 	if(n == 2) return true;
// 	if(n < 2) return false;
// 	if(!(n%2)) return false;
// 	return prm[n] == false;
// }
void sieve(ll M)
{
	for(ll i = 2; i * i <= M; i++)
	{
		if(prm[i] == true)
		{
			for(ll j = i * i; j <= M; j += i)
				prm[j] = false;
		}
	}
	for(ll i = 2; i <= M; i++)
		if(prm[i])
			primes.push_back(i);
}
int main()
{
	READ();
	memset(prm, true, sizeof(prm));
	sieve(8000000);
	int n;
	cin >> n;
	cout << primes[n - 1];
	return 0;
}