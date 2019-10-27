// problem link : https://codeforces.com/problemset/problem/734/A


#include<bits/stdc++.h>
#define LL long long
#define V vector<LL>
#define VV vector<V>
#define VB vector<bool>
#define VP vector<pair<LL,LL>>
using namespace std;



int main()
{
	LL n;cin>>n;
	string s;cin>>s;
	LL a=0,d=0;
	for(LL i=0;i<n;i++)
	if(s[i]=='D')d++;
	else a++;
	if(a>d)cout<<"Anton";
	else if(d>a)cout<<"Danik";
	else cout<<"Friendship";
}
