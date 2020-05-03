/*---------------------------
    Author : Javed Ansari
    Date   : 26 June 2019    
-----------------------------*/

// https://codeforces.com/contest/1183/problem/D

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

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int ddx[] = {1,0,-1,0,1,-1,-1,1};
int ddy[] = {0,1,0,-1,1,-1,1,-1};

vector <ll> g[MX];
vector <ll> v(MX);
bool vis[MX];


void solveQues(){

	TEST(t){

		ll n;
		cin>>n;
		ll a[n];
		unordered_map<ll,ll> Map;
		for(int i=0;i<n;i++) cin>>a[i], Map[a[i]]++;
		int siz=Map.size();
		pair<ll,ll> P[siz];
		int i=0;
		for(auto it:Map){
			P[i++]=make_pair(it.second,it.first);
		}
		sort(P,P+siz);
		Map.clear();
		ll s=0;
		for(int i=siz-1;i>=0;i--){
			ll x=P[i].first;
			if(Map.count(x)==0){
				s+=x;
				Map[x]=1;
			}
			else{
				
				while(Map.count(x)!=0 and x!=0){
					x--;
				}
				s+=x;
				Map[x]=1;
			}
		}
		cout<<s<<"\n";
	}

	return;
}


int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	solveQues();

	return 0;
}