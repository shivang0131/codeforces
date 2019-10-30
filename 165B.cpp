//Problem link- https://codeforces.com/contest/165/problem/B
//Solution Link- https://codeforces.com/contest/165/submission/60375961

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

bool check(ll, ll, ll);




int main()
{
	IOS;
    





	ll n, m,q=0, ans = 0, ans2 = 0,T;
	//cin>>T;
	T = 1;
	while(T--)
	{
		ll k;
		cin>>n>>k;
		//ll *arr = new ll[n];



    ll beg = 0, end = n+1, mid;
		while(beg<=end)
		{
			mid = (beg + end)/2;
			if(check(mid, k, n))
			{
			    ans = mid;
				  end = mid-1;
			}
			else beg = mid+1;

		}


        cout<<ans<<endl;




 	}
	return 0;
}


bool check(ll mid, ll k, ll n)
{
  ll sum = 0, val = mid, i= 0;
  while(val>0)
  {
    ll prc = pow(k, i);
    val = mid/prc;
    sum += val;
    i++;


  }
  if(sum>=n) return true;
  return false;


}
