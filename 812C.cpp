//Problem Link- https://codeforces.com/contest/812/problem/C
//Solution Link- https://codeforces.com/contest/812/submission/59918048

#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define UB upper_bound
#define LB lower_bound
#define PB push_back
#define mp make_pair
#define F first
#define S second
#define be(a) (a).begin(),(a).end()
#define deb(x) cout<< #x <<" "<<endl;
#define deb2(x, y) cout<< #x <<" "<< x <<endl<< #y <<" "<<y<<endl
#define fo(i, n) for(long long i=0; i<n; i++)
#define Fo(i, n, k) for(long long i=k; i<n; i++)
#define mod 1000000007
 
typedef vector<pair<long long int, long long int>> vll;
typedef unordered_map<long long int, long long int> ump;
typedef long long int ll;

ll absv(ll a)
{
	if(a<0)
		a *= -1;
	return a;
}

 
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

ll check(ll, ll*, ll);
 
 
 
 
int main()
{
	IOS;
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

	

	
 
	ll n, m,q=0, ans = 0, ans2 = 0,T;
	//cin>>T;
	T = 1;
	while(T--)
	{
		ll s;
		cin>>n>>s;
		ll *arr = new ll[n];
		
		cin>>arr[0];
		q = arr[0] + 1; 
		for(ll i=1; i<n; i++)
		{
			cin>>arr[i];
			q = min(q, arr[i]+i+1);
			
		}
 		
 		if(s<q){cout<<"0 0"; return 0;}

		ll beg = 1, end = n+1, mid;
  
        while(beg<end-1)
        {
            
            mid = (beg + end)/2;
            if(check(mid, arr, n)<=s)
                beg = mid;
            else end = mid;
        }

 
        cout<<beg<<" "<<check(beg, arr, n);



		
 	}
	return 0;
}


ll check(ll k, ll* arr, ll n)
{
	ll val=0;
	ll *arrsum = new ll[n];
	fo(i, n)
	{
		arrsum[i] = arr[i] + k*(i+1);
	}
	sort(arrsum, arrsum+n);
	for(ll i=0; i<k; i++) val += arrsum[i];
	return val;
}
