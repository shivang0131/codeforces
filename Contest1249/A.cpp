// Probelm : https://codeforces.com/contest/1249/problem/A

// Solution : https://codeforces.com/contest/1249/submission/63134161

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define pb push_back
#define srt(a) sort(a.begin(),a.end())
#define rsrt(a) sort(a.rbegin(),a.rend())
#define lb(a,b) lower_bound(a.begin(),a.end(),b)
#define ub(a,b) upper_bound(a.begin(),a.end(),b)
#define MOD ((int)(1000000007 ))
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define float long double
#define bigint __int128
#define sqrt sqrtl
#define cbrt cbrtl
#define endl '\n'
typedef vector<int> vi;
typedef vector<float> vf;
typedef pair<float,int> fi;
typedef pair<int,int> ii;
typedef pair<float,float> ff;
typedef vector<ff> vff;
typedef vector<ii> vii;
typedef vector<fi> vfi;
typedef vector<vi> vvi;
typedef vector<vf> vvf;
typedef vector<vii> vvii;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef priority_queue<int> pqi;
typedef priority_queue<ii> pqii;
typedef priority_queue<fi> pqfi;
typedef priority_queue <int, vector<int>, greater<int> > rpqi; 
typedef priority_queue <ii, vector<ii>, greater<ii> > rpqii; 
typedef priority_queue <fi, vector<fi>, greater<fi> > rpqfi;

const int N=1e8+1;
bool seive[N]={0};
int32_t main()
{
	IOS
	int q;cin>>q;
	while(q--)
	{
		int n;cin>>n;
		int ans=1;
		map<int,int>M;
		for(int i=1;i<=n;i++)
		{
			int x;cin>>x;
			if(M.find(x+1)!=M.end())ans=2;
			if(M.find(x-1)!=M.end())ans=2;
			M[x]++;
		}
		cout<<ans<<endl;
	}
	
}
	
		
	
	
	
	
	
	
	

 
