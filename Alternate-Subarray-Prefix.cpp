// Alternate Subarray Prefix - CodeChef
// https://www.codechef.com/problems/ALTARAY

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
		ll dp[n];
		for(int i=0;i<n;i++) dp[i] =  1;
		for(int i=n-1;i>=0;i--){
			if(i == (n-1)) dp[i] = 1;
			else{
				if((a[i] >= 0 and a[i+1] < 0) or (a[i] < 0 and a[i+1] >= 0)) dp[i] = dp[i+1] + 1;
				else dp[i] = 1;
			}
		}
		for(int i=0;i<n;i++) cout << dp[i] << " ";
		cout << endl;
	}

	return 0;
}
