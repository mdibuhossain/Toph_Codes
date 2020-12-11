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
}

int GCD(int n1, int n2)
{
	if(n2)
		return GCD(n2, n1%n2);
	return n1;
}

int main()
{
	#ifndef ONLINE_JUDGE
		CLOCK();
		//READ();
		//WRITE();
	#endif
//---------------------------code_start_from_here-------------------------


	int n, cnt = 0; cin >> n;
	for(int i = 1; i < n; ++i)
		if(GCD(i , n) == 1) cnt++;
	cout << cnt << endl;


//---------------------------code finished--------------------------------

	#ifndef ONLINE_JUDGE
		TIME();
	#endif
	return 0;
}