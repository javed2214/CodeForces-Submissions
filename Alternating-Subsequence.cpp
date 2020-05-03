// Alternating Subsequence - CodeForces
// https://codeforces.com/problemset/problem/1343/C

#include<bits/stdc++.h> 
using namespace std;

#define MAX 10001
#define ll long long

vector <int> g[MAX];

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

		ll cnt = 0;

		unordered_map <ll, vector <ll>> Map;

		for(int i=0;i<n-1;i++){
			if((a[i] >=0 and a[i+1] < 0) or (a[i] < 0 and a[i+1] >= 0)) Map[cnt].push_back(a[i]), cnt += 1;
			else Map[cnt].push_back(a[i]);
		}
		Map[cnt].push_back(a[n-1]);
		ll mx = 0, sum = 0, flag = 0;
		for(auto it: Map){
			flag = 0;
			for(auto pt: it.second){
				if(flag == 0) mx = pt;
				else mx = max(mx, pt);
				flag = 1;
			}
			sum += mx;
		}
		cout << sum << "\n";
	}

	return 0;
}

