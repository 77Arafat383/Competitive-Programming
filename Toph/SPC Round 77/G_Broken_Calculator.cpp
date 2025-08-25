//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // *v.find_by_order(x)=xth position e ki ache , v.order_of_key(x)==x theke kotota choto ache
typedef tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update> dpbds; //decending order
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> mpbds; // work like a multiset
//tuple  ---> get<0>(v[i]) , get<1>(v[i]) get<2>(v[i]) to access three tuple value
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
const ll bM =  998244353;
const ll INF =  1e18;
#define    all(x)           x.begin(), x.end()
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define rsort(v) sort(v.rbegin(),v.rend());
#define taking(a)  for(auto &it:a) cin>>it;
#define printv(a)  for(auto &it:a) cout<<it<<' '; cout<<'\n'
#define printm(a)  for(auto &[x,y]:a) cout<<x<<' '<<y<<'\n'
#define printmv(a) for(auto [x,v]:a) {cout<<x<<'\n'; printv(v);}
#define mkunique(x) sort(all(x));(x).erase(unique(all(x)),(x).end())
#define bitcount(x) __builtin_popcount(x)
#define si(x) int(x.size())
#define VL vector<ll>
#define P pair<ll,ll>
#define VP vector<pair<ll,ll>>
#define Mp map<ll,ll>
#define MV map<ll,vl>
const int N=1e5;




void solve()
{
    string str;
    cin>>str;
    vector<pair<char,string>>v;
    int n=str.size();
    for(int i=0; i<n;){
        string tem;
        if((i==0 and str[i]!='-') or (str[i]=='+')){
              //this is positive.
              if(i!=0)
                i++;
              while(str[i]!='+' and str[i]!='-' and i<n){
                tem.push_back(str[i]);
                i++;
              }
              v.push_back({'+',tem});
        }else{
             i++;
             while(str[i]!='+' and str[i]!='-' and i<n){
                tem.push_back(str[i]);
                i++;
             }
             v.push_back({'-',tem});
        }
    }
    // for(auto &[x,y]:v){
    //     cout<<x<<' '<<y<<'\n';
    // }

    vector<pair<char,ll>>vv;
    for(auto &[x,y]:v){
        ll result=1;
        string num;
        for(int i=0; i<y.size(); i++){
            if(y[i]!='*'){
                num.push_back(y[i]);
            }else{
                ll rnum=stoll(num);
                num.clear();
                result*=rnum;
            }
        }
        ll rnum=stoll(num);
        num.clear();
        result*=rnum;
        vv.push_back({x,result});
    }
 
    //  for(auto &[x,y]:vv){
    //     cout<<x<<' '<<y<<'\n';
    // }

    ll ans=0;
    for(auto &[x,y]:vv){
        if(x=='+') ans+=y;
        else ans-=y;
    }
    cout<<ans<<'\n';

}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}