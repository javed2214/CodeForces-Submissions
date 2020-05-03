// REPOSTS - CodeForces
// https://codeforces.com/problemset/problem/522/A

#include<bits/stdc++.h>
using namespace std;

#define MAX 10001
#define ll long long

vector <int> g[MAX];

string getString(string s){

	int n = s.length();
	for(int i=0;i<n;i++){
		if(s[i] < 97) s[i] += 32;
	}
	return s;
}

int dfs(ll u){

	int mx = 0;

	for(auto it: g[u])
		mx = max(mx, 1 + dfs(it));

	return mx;
}

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

	unordered_map <string, int> Map;

	for(int i=0;i<n;i++){
		
		string s1, s3, s2;
		cin >> s1 >> s3 >> s2;

		s1 = getString(s1);
		s2 = getString(s2);

		if(Map.count(s1) == 0) Map[s1] = Map.size() + 1;
		if(Map.count(s2) == 0) Map[s2] = Map.size() + 1;

		g[Map[s2]].push_back(Map[s1]);
	}

	cout << 1 + dfs(Map["polycarp"]);

	return 0;
}

