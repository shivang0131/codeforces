//Problem Link- https://codeforces.com/contest/1249/problem/C1
//Solution Link- https://codeforces.com/contest/1249/submission/63215680


#include<iostream>
#include<bits/stdc++.h> 
#define UB upper_bound
#define LB lower_bound
#define BS binary_search
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define ll long long int
#define ld long double
#define vl vector<ll>
#define sl set<ll>
#define li list<ll>
#define vp vector<pair<ll, ll> >
#define N 200007
#define mod 1000000007
using namespace std;
set<ll> fi;
unordered_map<ll,ll> mp;
void fill(ll a[],ll n)
{
 ll s=0;
 for(ll i=0;i<n;i++)
  s+=a[i];
 bool dp[n+1][s+1];
 memset(dp, 0, sizeof(dp));
 for(ll i=0;i<=n;i++)
  dp[i][0]=true;
 for(ll i=1;i<=n;i++)
 {
  dp[i][a[i-1]]=true;
  for(ll j=1;j<=s;j++)
  {
   if(dp[i-1][j]==true)
   {
   	dp[i][j]=true;
   	dp[i][j+a[i-1]]=true;
   }	
  }	
 }
 for(ll j=0;j<=s;j++)
  if(dp[n][j]==true)
   fi.insert(j);	
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
ios::sync_with_stdio(0);
cin.tie(0);
ll a[10]={1,3,9,27,81,243,729,2187,6561,19683};
fill(a,10);
ll t=1;
cin>>t;
while(t--)
{ 
 ll n;
 cin>>n;
 cout<<*LB(fi.begin(),fi.end(),n)<<endl;
}
return 0;
}
