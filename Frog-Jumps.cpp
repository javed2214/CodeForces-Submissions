// Frog Jumps - CodeForces
// https://codeforces.com/problemset/problem/1324/C

#include<bits/stdc++.h>
using namespace std;

#define MAX 10001
#define ll long long

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ios_base::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	ll test;
	cin >> test;

	while(test--){

		string s;
		cin >> s;

		int n = s.length();
		vector <ll> v;
		ll prev = 0, mx = 0;

		for(int i=1;i<=n;i++)
			if(s[i-1] == 'R') mx = max(mx, i - prev), prev = i;

		mx = max(mx, n + 1 - prev);
		cout << mx << "\n";

	}
	return 0;
}
