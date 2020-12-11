//#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <iterator>
#include <bitset>
#include <assert.h>
#include <new>
#include <sstream>
#include <time.h>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#define READ()		freopen("input", "r", stdin)
#define WRITE()		freopen("output", "w", stdout)
#define TIME()		fprintf(stderr,"Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC)
#define CLOCK()		clock_t tStart = clock()
using namespace std;
using ll = long long int;

ll funFactorial(ll n) {if (n == 0) return 1;return n * funFactorial(n - 1);}

vector<ll>primes;
bool prime[100000000];
ll isPrime(ll n)
{
	if(n < 2) return false;
	return prime[n];
}
void seive(ll n)
{
	for(ll i = 2; i <= n; i++)
		if(prime[i])
		{
			for(ll j = i * i; j <= n; j += i)
				prime[j] = false;
		}
	primes.push_back(2);
	for(ll i = 3; i <= n; i+=2)
		if(isPrime(i)) primes.push_back(i);
}

int main()
{
	#ifndef ONLINE_JUDGE
		CLOCK();
		//READ();
		//WRITE();
	#endif
//---------------------------code_start_from_here-------------------------


	memset(prime, true, sizeof(prime));
	seive(10000000);
	int t;
	cin >> t;
	while(t--)
	{
		ll n, cnt = 0;
		cin >> n;
		vector<ll>::iterator upper1;
		upper1 = upper_bound(primes.begin(), primes.end(), n);
		if(isPrime(n))
			cout << (upper1 - primes.begin()) - 1 << endl;
		else cout << (upper1 - primes.begin()) << endl;
	}


//---------------------------code finished--------------------------------

	#ifndef ONLINE_JUDGE
		TIME();
	#endif
	return 0;
}