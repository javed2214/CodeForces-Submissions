/*---------------------------
    Author : Javed Ansari
    Date   : 27 June 2019    
-----------------------------*/

// https://codeforces.com/contest/1182/problem/B

#include<bits/stdc++.h>
#include<cstring>
#include<stdio.h>
using namespace std;
#define MOD1 1000000007
#define MOD2 1000000009
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define DB(x) cout<<#x<<"="<<x<<"\n";
#define DB2(x,y) cout<<#x<<"="<<x<<"  "<<#y<<"="<<y<<"\n";
#define SORTV(a) sort(a.begin(),a.end())
#define SORTA(a,n) sort(a,a+n)
#define TEST(t) ll t; cin>>t; while(t--)
#define PI 2*acos(0.0)
#define pb push_back
#define eb emplace_back
#define RFOR(i,n) for(int i=(n)-1;i>=0;i--)
#define endl cout<<"\n";
#define co cout<<
#define SS cout<<"*";
#define sc1(x) scanf("%lld",&x)
#define sc2(x,y) scanf("%lld %lld",&x,&y);
#define sc3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z);
#define sc4(x,y,z,p) scanf("%lld %lld %lld %lld",&x,&y,&z,&p);
#define pr(n) printf("%lld\n",n)
#define UNIQUEA(a,n) unique(a,a+n)-a
#define UNIQUEV(v) v.erase(unique(v.begin(),v.end()),v.end())
#define INSERT(index, str) str.insert(index,str)
#define REPLACE(str,start,count,new_str) str.replace(start,count,new_str)
#define COUNT(str,ch) count(str.begin(),str.end(),ch)
#define ERASE(str,index) str.erase(str.begin()+index)
#define MAXA(a,n) *max_element(a,a+n)
#define MINA(a,n) *min_element(a,a+n)
#define REV(v) reverse(v.begin(),v.end())
#define SUM(v) accumulate(v.begin(),v.end(),0)
#define MAXV(v) *max_element(v.begin(),v.end())
#define MINV(v) *min_element(v.begin(),v.end())
#define ull unsigned long long
#define ll long long int
#define ld long double
#define SIZE 100000001
#define INF 0x7fffffff

const int MX = 1e5+5;

// int dx[] = {1,0,-1,0};
// int dy[] = {0,1,0,-1};

// int ddx[] = {1,0,-1,0,1,-1,-1,1};
// int ddy[] = {0,1,0,-1,1,-1,1,-1};

// vector <ll> g[MX];
// vector <ll> v(MX);
// int vis[MX];

char str[502][5002];

bool check(int x, int y, int n, int m){

	if(x-1>=0 and x+1<n and y-1>=0 and y+1<m) return true;
	return false;
}

bool checkCond(int x, int y, int n, int m){

	if(check(x,y,n,m) and str[x-1][y]=='*' and str[x+1][y]=='*' and str[x][y-1]=='*' and str[x][y+1]=='*')
		return true;
	return false;
}


void solveQues(){

	int n,m;
	cin>>n>>m;

	int flag=0;

	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>str[i][j];
	

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){

			if(checkCond(i,j,n,m) and str[i][j]=='*'){
				
				str[i][j]='.';
				for(int k=j;k<m;k++) str[i][k]='.';
				for(int k=j;k>=0;k--) str[i][k]='.';
				for(int k=i;k>=0;k--) str[k][j]='.';
				for(int k=i;k<n;k++) str[k][j]='.';
				
				flag=1;
				break;
			}
		}
		if(flag) break;
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(str[i][j]=='*'){
				cout<<"NO";
				return;
			}
		}
	}

	cout<<"YES";
	
	return;
}


int main(){

	ios_base::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);
	
	solveQues();

	return 0;
}
