// Teams Forming - CodeForces
// https://codeforces.com/problemset/problem/1092/B

#include<bits/stdc++.h>
using namespace std;

#define MAX 101
#define ll long long

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ios_base::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	ll n;
	cin >> n;

	ll a[n];
	for(int i=0;i<n;i++) cin >> a[i];

	sort(a, a + n);
	
	ll s = 0;

	for(int i=0;i<n-1;i+=2) s += abs(a[i] - a[i + 1]);

	cout << s << "\n";

	return 0;
}

