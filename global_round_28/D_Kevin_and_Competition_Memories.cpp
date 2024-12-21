// faique
// div 2 D till dec 2024
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
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    int kevin = a[0];

    sort(a.begin(), a.end());

    vector<int> rank(m);


    for (int i = 0; i < m; i++)
    {
        if (b[i] <= kevin)
            rank[i] = 1;
        else
        {

            int it = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
           
            rank[i] = n - it + 1;
        }
    }



    sort(rank.begin(), rank.end());

    for (int k = 1; k <= m; k++)
    {

        int ans = 0;

        for (int i = k - 1; i < m; i += k)
            ans += rank[i];

        cout << ans << " ";
    }

    cout << endl;
}

signed main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}