// Sorted Adjacent Differences - CodeForces
// https://codeforces.com/problemset/problem/1339/B

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

		ll n;
		cin >> n;

		ll a[n];
		for(int i=0;i<n;i++) cin >> a[i];

		sort(a, a + n);

		ll l = (n - 1) / 2;
		ll r = l + 1;

		while(l >= 0 and r < n){

			if(l >= 0){
				cout << a[l] << " ";
				l -= 1;
			}
			if(r < n){
				cout << a[r] << " ";
				r += 1;
			}
		}
		
		if(l == 0) cout << a[l];

		cout << "\n";
	}

	return 0;
}
