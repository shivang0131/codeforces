/*                                        Z-algorithm

1. we create a z array which is equal to the length of the string.

2. z[i] = length of longest substring starting of str starting from i which is also a prefix
          
          str.

3. [l, r] such that 1 <= l <= r <= n-1 where n is the length of the string. r is max. possible
   
   index in the string for which str[0 ....] = str[l...r] .

4. Currently on i, and we have to calculate z[i]. for all j<i, z[j] is already calculated.

5. current interval [l, r] and we have to claculate z[i], if(i > r), then starting from i we will
    
   calcualte maximum matching. abcfdhrdgfdkabcd
                               0123        i    so str[i] matches with str[0], str[i+1] matches with str[1],

                                                str[i+2] matches with str[2] and then a mismatch.

                                                now, z[i] = 3 and now l = i, r = i+2

6. if l <= i <= r, we can use prev. value in z[]. 
    
    str[0 ...j... r-l] = str[l ....i....r] (len = r - l + 1) then, 

    j = i - l, the relative position of i in the prefix str[0 .... r-l].

    and z[j] is already calculated. 

    Now, if z[j] < (r - i + 1), then z[i] = z[j].

    but, if z[j] >= (r - i + 1), then l = i and start matching with str[r - l + 1,  ...] with
    str[r+1, r+2, ...] then we will get a different (l, r) and now z[i] = r - l + 1


*/



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
#define int long long

typedef long long ll;

void fileIO()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
 
typedef vector<pair<int, int>> vll;
typedef unordered_map<int, int> ump;



bool sortbysecdesc(const pair<int, int> &a, 
                    const pair<int, int> &b) 
{ 
    return a.second>b.second;
}

bool sortdesc(const pair<int, int> &p1,
                const pair<int, int> &p2)
{
    return p1.first>p2.first;
}


vector<int> z_algo(string s)
{
    int n = s.size();

    vector<int> z(n);
    z[0] = 0;

    int l = 0, r = 0;

    for(int i = 1; i<n; i++)
    {
        if(i>r)
        {
            l = r = i;

            while(r < n && s[r-l] == s[r])
                r++;

            z[i] = r - l;

            r--;
        }

        else
        {
            int j = i - l;

            if(z[j] + i <= r) z[i] = z[j];

            else
            {
                l = i;

                while(r < n && s[r] == s[r - l])
                    r++;

                z[i] = r - l;

                r--;
            }
        }
    }

    return z;
}



int32_t main()
{
    IOS;
    fileIO();
    int T;
    T = 1;
    //cin>>T;

    while(T--)
    {
        string str;

        cin>>str;

        vector<int> z = z_algo(str);

        

        int i = 0; 

        

        int n = str.size();

        

        int maxz = 0, res = 0;

        for(int i = 1; i < n; i++)
        {
            if(z[i] == n - i && maxz >= n-i) {res = n - i; break;}

            maxz = max(maxz, z[i]);

        }

        for(int i = 0; i<res; i++)cout<<str[i];



        if(!res) cout<<"Just a legend\n";
    }
    
    return 0;
}






