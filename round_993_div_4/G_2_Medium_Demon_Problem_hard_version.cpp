
/*
    --> Ankit singh sisodya
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

#define debug(...) 42
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
#include "algo.h";
#endif

std::mt19937_64 rng{std::chrono::steady_clock::now().time_since_epoch().count()};

void solve()
{
    int n;
    cin >> n;
    vector<int> adj(n + 1, 0ll);
    vector<int> indeg(n + 1, 0ll);
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        adj[i] = x;
        indeg[x]++;
    }
    vector<int> cycle(n + 1, 0ll), vis(n + 1, 0ll), dp(n + 1, 1ll);
    queue<int> q;

    for (int i = 1; i <= n; ++i)
        if (!indeg[i])
            q.push(i);

    int ans = 1;
    if (q.size() == 0)
    {
        cout << 2 << "\n";
        return;
    }
    while (q.size())
    {
        auto node = q.front();
        q.pop();
        debug(node);
        indeg[adj[node]]--;
        dp[adj[node]] += dp[node];

        if (indeg[adj[node]] == 0)
        {

            ans = max(ans, dp[adj[node]]);
            q.push(adj[node]);
        }
    }
    cout << ans + 2 << "\n";
}

signed main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
