// Pizza Delivery
// https://www.codechef.com/problems/DBOY

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

		ll h[n], k[n];
		
		for(int i=0;i<n;i++) cin >> h[i];
		for(int i=0;i<n;i++) cin >> k[i];

		ll dp[n];

		if(k[i] >= 2 * h[i]) dp[i] = 1;
		else dp[i] = ceil((2 * h[i]) / k[i]);

		for(int i=1;i<n;i++){
			if()
		}
	}

	return 0;
}
