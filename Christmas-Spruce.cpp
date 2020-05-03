// Christmas Spruce - CodeForces
// https://codeforces.com/problemset/problem/913/B

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

	ll n;
	cin >> n;

	for(int i=2;i<=n;i++){
		ll x;
		cin >> x;
		g[x].push_back(i);
	}

	for(int i=1;i<=n;i++){

		if(g[i].empty()) continue;

		int cp = 0;

		for(auto it: g[i])
			if(g[it].empty()) cp += 1;

		if(cp <= 2) return !printf("No\n");
	}

	return !printf("Yes\n");
}

