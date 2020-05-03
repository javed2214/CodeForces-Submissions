// Teams Forming - CodeForces
// https://codeforces.com/problemset/problem/177/A2

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

	ll a[n][n];
	ll diag1 = 0, diag2 = 0, mid_row = 0, mid_col = 0;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin >> a[i][j];
	}

	for(int i=0;i<n;i++){
		diag1 += a[i][i];
		diag2 += a[i][n-i-1];
		mid_row += a[n/2][i];
		mid_col += a[i][n/2];
	}
	cout << diag1 + diag2 + mid_col + mid_row - 3 * a[n/2][n/2] << endl;

	return 0;
}

