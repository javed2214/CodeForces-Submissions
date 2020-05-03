// Teams Forming - CodeForces
// https://codeforces.com/problemset/problem/32/B

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

	string s;
	cin >> s;

	int n = s.length();

	for(int i=0;i<n;){
		if(s[i] == '-' and s[i+1] == '.') cout << 1, i+= 2;
		else if(s[i] == '-' and s[i+1] == '-') cout << 2, i += 2;
		else cout << 0, i += 1;
	}

	return 0;
}

