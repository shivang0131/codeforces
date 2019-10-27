//problem:https://codeforces.com/problemset/problem/581/A

//solution:https://codeforces.com/contest/581/submission/43513375

#include<bits/stdc++.h>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
#include<iterator>
#include<iostream>

#define lli long long int
#define ld long double
#define llu long unsigned int
#define mod ((lli)(1e10+7)
#define ilpf(a,b) for(lli i=a;i<=b;i++)
#define jlpf(a,b) for(lli j=a;j<=b;j++)
#define klpf(a,b) for(lli k=a;k<=b;k++) 
#define ilpb(a,b) for(lli i=a;i>=b;i--)
#define jlpb(a,b) for(lli j=a;j>=b;j--)
#define klpb(a,b) for(lli k=b;k>=a;k--)
#define vlli vector<lli>
#define vld vector<ld>
#define vb vector<bool>
#define vch vector<char>
#define vstr vector<string>
#define vpllilli vector<pair<lli,lli>>
#define vpllild vector<pair<lli,ld>>
#define vpldlli vector<pair<ld,lli>>
#define vpllib vector<pair<lli,bool>>
#define vpldld vector<pair<ld,ld>>
#define vpldb vector<pair<ld,bool>>
#define vpstrlli vector<pair<string,lli>>
#define vpllistr vector<pair<lli,string>>
#define vpstrld vector<pair<string,ld>>
#define vpldstr vector<pair<ld,string>>
using namespace std;
lli llin(){lli x;scanf("%lld",&x);return x;}
ld ldin(){ld x;scanf("%Lf",&x);return x;}
char chin(){char ch;cin>>ch;return ch;}
string strin(){string str;cin>>str;return str;}
void No(){ cout<<"No"<<endl;}
void NO(){ cout<<"NO"<<endl;}
void Yes(){ cout<<"Yes"<<endl;}
void YES(){ cout<<"YES"<<endl;}
lli fmin_i(vlli v){lli n=v.size(),mn_i=0,mn_e=v[0];ilpf(0,n-1){lli MIN=min(mn_e,v[i]);if(MIN!=mn_e){mn_e=MIN;mn_i=i;}}return mn_i;}
lli fmax_i(vlli v){lli n=v.size(),mx_i=0,mx_e=v[0];ilpf(0,n-1){lli MAX=max(mx_e,v[i]);if(MAX!=mx_e){mx_e=MAX;mx_i=i;}}return mx_i;}
lli lmin_i(vlli v){lli n=v.size(),mn_i=0,mn_e=v[0];ilpf(0,n-1){if(v[i]<=mn_e){mn_e=v[i];mn_i=i;}}return mn_i;}
lli lmax_i(vlli v){lli n=v.size(),mx_i=0,mx_e=v[0];ilpf(0,n-1){if(v[i]>=mx_e){mx_e=v[i];mx_i=i;}}return mx_i;}
lli min_e(vlli v){lli mn_e=v[0],n=v.size();ilpf(0,n-1)mn_e=min(mn_e,v[i]);return mn_e;}
lli max_e(vlli v){lli mx_e=v[0],n=v.size();ilpf(0,n-1)mx_e=max(mx_e,v[i]);return mx_e;}
void make_prime(vb&v){lli I=2,n=(lli)v.size()-1;ilpf(0,n)v[i]=true;v[0]=false;v[1]=false;while(I<=n){while(I<=n&&!v[I])I++;if(I>n)break;lli i=2;while(i*I<=n){v[i*I]=false;i++;}I++;}}

/*---------------------------------------------------Vector STL/Function----------------------------------------------------------
 * sort(v.begin().v.end())
 * reverse(v.begin(),v.end())
 * (bool) binary_search(v.begin(),v.end(),key)
 * (iterator) lower_bound(v.begin(),v.end(),key);
 * (iterator) upper_bound(v.bein(),v.end(),key);
 * v.erase(v.begin()+i)
 * v.erase(unique(v.begin(),v.end()),v.end())
 * (bool)next_premutation(v.begin(),v.end())
 * (bool)prev_premutation(v.begin(),v.end())
 * 
 * v.push_back(data),v.pop_back(data),(data) v.front() ,(data) v.back() ,(data) v[index]
 * (lli) max_e(v) ,(lli)min_e(v) ,lli fmax_i(v) ,lli lmax_i(v) ,lli fmin_i(v) ,lli lmin_i(v)
 */ 
 
 /*--------------------------------------------------Vector of pairs----------------------------------------------------------------
  * vector<pair<key_type,data type>> vp
  * vp.push_back(make_pair(key,data))
  * 
  * sort by key/first element (then data/second)
  * sort(vp.begin(),vp.end()) 
  * 
  * sort by sec element(only by sec)
  * bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
  * { 
  *       return (a.second < b.second); 
  * }
  * sort(vp.begin(),vp.end(),sortbysec) 
  * 
  * (data) vp[i].first ,(data) vp[i].second ,
  */
  
  
 /* -------------------------------------------------STACK------------------------------------------ 
  * stack<data_type>s
  * push()              :s.push(data)           :O(1)
  * pop()               :s.pop(data)            :O(1)
  * top()               :s.top()                :O(1)
  * empty()             :s.empty ()             :O(1)
  * size()              :s.size()               :O(1)
  */
  
 /* -------------------------------------------------QUEUE------------------------------------------          
  * queue<data_type>q    
  * push()               :q.push(data)          :O(1)
  * pop()                :q.pop()               :O(1)
  * front()              :q.front()             :O(1)
  * back()               :q.back()              :O(1)
  * empty()              :q.empty()             :O(1)
  * size()               :q.size()              :O(1)
  */
  
 /*------------------------------------------ priority_queue(default MAX HEAP)-------------------------------
  * priority_queue(data_type>pq
  * push()               :pq.push(data)         :O(log(n))
  * pop()                :pq.pop()              :O(long(n))
  * top()                :pq.top()              :O(1)
  * size()               :pq.size()             :O(1)
  */

 /*---------------------------------------------SET:Element in sorted order----------------------------------
 * declaration   : set<lli>s
 * insertion     : s.insert(data)                                    :O(log(n))             
 * size          : s.size()                                          :O(1) 
 * find          :auto it=s.find(data) //if it!=s.end -> data found  :O(log(n))
 * loop          :for(auto it=s.begin();it!=s.end();it++)
 */
 

 /* Unorderd SET  :Elements in unsorted order
 * declaration   :unordered_set<lli>s
 * insertion     :s.insert(data)                                     :O(1)
 * size          :s.size()                                           :O(1)
 * find          :auto it=s.find(data)//if it!=s.end ->data found    :O(1)
 * loop          :for(auto it=s.begin();it!=s.end();it++)
 */

/*
 * MAP           :Elemnet r SORTED,unlike set we insert (key and data)
 * declaration   :map<key_type,data_type>m
 * insert        :m.insert(make_pair(key,data));                     :O(log(n))
 * find          :auto it=m.find(key) //if(it!=m.end)it->first=key   :O(log(n))
 * []            :m[key]++      //data=data+1 ,at that key           :O(log(n))
 * size          :m.size()                                           :O(1)
 * loop          :for(auto it=m.begin();it!=s.end();it++)
 */
 
/* Unordered MAP :Element r UNSORTED,unlike unordered set we insert (key and data)
 * declaration   :unorderd_map<key_type,data_type> m
 * insert        :insert(make_pair(key,data))                        :O(1) 
 * find          :auto it=m.find(key) //if (it!=m.end)it->first=key  :O(1)
 * []            :m[key]++      //data=data+1 ,at that key           :O(1)
 * size          :m.size()                                           :O(1)
 * loop          :for(auto it=s.begin();it!=s.end();it++)
 */
 
 /* muti_set             :similar to set but have duplicate element
  * multi_set<data_type>ms
  * insert()               :ms.insert(data)         :O(log(n))
  * find()                 :auto it=ms.find(data)   :O(long(n))
  * size()                 :ms.size()               :O(1)
  */
  
  /* multimap              :similar to MAP but can have duplicate keys  :search O(logn):insert O(logn):delete O(logn)  
   * mulimap<key_type,data_type>mm
   * mm.insert(pair<key_type,data_type>(key,data))        :O(long(n))
   * multimap<key_type,data_type> mm2(mm.begin(),mm.end())  
   * find()                :it=mm.find(key)  //first it   :O(long(n))
   * mm.lower_bound(key)->second //data      mm.lower_bound(key)=it  1st elemet having the key  or mm.end()
   * mm.upper_bound(key)->second //data      mm.upper_bound(key)=it  1st element just after the key or mm.end()
   * mm.erase(key)         :erase all element of the key value
   * mm.erase(mm.begin(),mm.find(key))    :remove all having(key) less than the given key
   * mm.size()                                             :O(1)
   * for(auto it=mm.begin();it!=mm.end;it++)     :traversal
   */

int main()
{
	lli n=llin(),m=llin();
	cout<<min(n,m)<<" "<<max( (m+n-2*min(m,n))/2,(lli)0)<<endl;
	
	
}
	
	
	
	
		

		

