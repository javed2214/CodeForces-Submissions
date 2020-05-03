// Balanced Array - CodeForces
// https://codeforces.com/problemset/problem/1343/B

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

	ll test;
	cin >> test;

	while(test--){

		ll n;
		cin >> n;

		ll a[n];

		if((n/2) % 2 != 0) cout << "NO\n";
		else{
			ll s = 2;
			ll s2 = 1, sum = 0, sum2 = 0;
			cout << "YES\n";
			for(int i=0;i<n;i++){
				if(i < (n/2)) a[i] = s, s += 2, sum += a[i];
				else{
					if(i < n - 1) a[i] = s2, s2 += 2, sum2 += a[i];
					if(i == n - 1) a[i] = sum - sum2;
				}
			}

			for(int i=0;i<n;i++) cout << a[i] << " ";
			cout << "\n";
		}
	}

	return 0;
}

