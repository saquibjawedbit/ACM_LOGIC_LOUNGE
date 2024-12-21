/*
╔═══════════════════════════════════════════════════════════╗
 
               ~*PRIYANSHU3011*~
 
╚═══════════════════════════════════════════════════════════╝
*/
 
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<ll>
#define vc vector<char>
#define vll vector<ll>
#define pi pair<ll,ll>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define f(i,a,b) for (ll i = a; i < b; i++)
#define fe(itr,a) for(auto itr:a) 
#define fr(i,n) for(ll i=n;i>=0;i--)
#define yes cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define W(t) ll t; cin>>t; while(t--)
#define PI 3.141592653589793238462643383279
#define mii map<ll,ll>
#define mll map<ll , ll>
#define inp(v,n) for(ll i=0;i<n;i++){ll xty; cin>>xty; v.pb(xty);}
#define in(x) cin>>x
const ll MOD = 1e9 + 7;
 
/* decimal to binary function */

vector<ll> getBinary(ll n) 
{
    if (n == 0) return {0}; 
    
    vi v;
    while (n > 0) 
    {
        v.pb(n & 1);
        n >>= 1;
    }
    v.pb(0);
    reverse(v.begin(),v.end());
    return v;
}
 
/* solve */

void solve() 
{
    ll n,k;
    cin>>n>>k;
    vll v(n,-1);
    ll j=1 , z=n;
    // set<ll> s;
    // for(ll i=1;i<n+1;i++) s.insert(i);
    for(ll i=k-1; i<n; i+=k)
    {
        v[i]=j;
        j++;

        // v[i]=*s.begin();
        // s.erase(*s.begin());
    }
    f(i,0,n)
    {
        if(v[i]==-1) v[i]=j , j++;
        // if(v[i]==-1)
        // {
        //     v[i]=*s.begin();
        //     s.erase(*s.begin());
        // }
    }
    fe(i,v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

    
/* main */

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    W(t)
    {
        solve();
    }
    
    return 0;
}