//Problem Link- https://codeforces.com/contest/1201/problem/C


#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define PB push_back
#define mp make_pair
#define F first
#define S second
#define be(a) (a).begin(),(a).end()
#define deb(x) cout<< #x <<" "<<endl;
#define deb2(x, y) cout<< #x <<" "<< x <<endl<< #y <<" "<<y<<endl
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
 
bool isPrime(long long n) 
{ 
	
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (long long i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
}
ll n, m,q,k, ans = 0;
ll *arr;


bool check(ll x)
		{
			ll mods = 0;
			for(ll i=n/2; i<n; i++)
			{
				if(x-arr[i]>=0) mods+= x-arr[i];
				if(mods>k) return false;
			}
			return true;
		}
 
 
 
 
 
 
int main()
{
	IOS;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

	
	//cin>>q;
	q = 1;
	while(q--)
	{
		cin>>n>>k;
		arr = new ll[n];
		fo(i, n) cin>>arr[i];
		sort(arr, arr+n);
		ll beg = 1, end = 2000000000, mid;

		

		while(beg!=end)
		{
		    
			mid = (beg + end  + 1)/2;
			if(check(mid))
				beg = mid;
			else end = mid-1;
		}

		cout<<beg<<"\n";
 		
 
 
 	}
	return 0;
}
