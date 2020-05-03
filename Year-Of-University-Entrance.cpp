// Teams Forming - CodeForces
// https://codeforces.com/problemset/problem/769/A

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

	ll n;
	cin >> n;

	ll a[n];
	for(int i=0;i<n;i++) cin >> a[i];

	sort(a, a + n);

	vector <ll> v;

	if(n == 1) cout << a[0] << endl;
	else if(n == 2) cout << a[1] << endl;
	else if(n == 3) cout << a[1] << endl;
	else{
		for(int i=0;i<=n-3;i++){
			if(abs(a[i] - a[i+1]) == abs(a[i+1] - a[i+2])){
				v.push_back(a[i]);
			}
		}
		cout << v[v.size() - 1] << endl;
	}

	return 0;
}

