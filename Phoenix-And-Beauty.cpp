// Phoenix and Beauty
// https://codeforces.com/problemset/problem/1348/B

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

		ll n, k;
		cin >> n >> k;

		unordered_set <ll> s;
		multiset <ll> ms;

		ll a[n];
		for(int i=0;i<n;i++) cin >> a[i], s.insert(a[i]);

		if(s.size() > k) cout << "-1\n";
		else{
			std::vector<ll> v;
			ll x = s.size();
			while(true){
				if(ms.size() == 0 and v.size() % k == 0) break;
				if(ms.find(x) != ms.end()) ms.erase(x);
				v.push_back(x);
				x -= 1;
			}
		}
	}
	return 0;
}

