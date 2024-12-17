//faique
//div 2 D till dec 2024
#include <bits/stdc++.h>
#define int long long
using namespace std;

#define debug(...) 42
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
#include "debugging.h";
#endif

void solve()
{
    int m,a,b,c;
    cin>>m>>a>>b>>c;

    int row1 = m;
    int row2 = m;

    int ans = 0;

    ans += min(row1,a);

    row1 -= min(row1,a);

    ans += min(row2,b);
    
    row2 -= min(row2,b);

    ans += min(c,row1+row2);

    cout<<ans<<endl;



}

signed main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}