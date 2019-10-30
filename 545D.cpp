//Problem Link- https://codeforces.com/contest/545/problem/D


#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define PB push_back
#define mp make_pair
#define F first
#define S second
#define be(a) (a).begin(),(a).end()
#define deb(x) cout<< #x <<" "<<endl;
#define deb(x, y) cout<< #x <<" "<< x <<endl<< #y <<" "<<y<<endl
#define fo(i, n) for(long long i=0; i<n; i++)
#define Fo(i, n, k) for(long long i=k; i<n; i++)
 
typedef vector<pair<long long int, long long int>> vll;
typedef unordered_map<long long int, long long int> ump;
typedef long long int ll;

bool sortbysecdesc(const pair<ll, ll> &a, 
                   const pair<ll, ll> &b) 
{ 
       return a.second>b.second; 
}





 
int main()
{
	IOS;
	ll n, m,q,ans = 0;
	//cin>>q;
	q = 1;
	while(q--)
	{
		cin>>n;
		ll *arr = new ll[n];
		fo(i, n) cin>>arr[i];
		sort(arr, arr+n);
		ll presum = arr[0];
		ll k=1, cnt = 1;
		Fo(i, n, k){

		 	
		 	if(arr[i]>=presum)
		 	{
		 		cnt++;
		 		presum += arr[i];
		 	} 
		 	else
		 	{
		 		i++;
		 		while(arr[i]<presum && i<n)
		 			i++;
		 		if(i!=n) i--;
		 	}

		 }

		

		cout<<cnt;

	}
 
	return 0;
}
