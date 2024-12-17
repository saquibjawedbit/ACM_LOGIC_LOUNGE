#include <bits/stdc++.h>
#define int long long
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define TEST(t) int t; cin>>t; while(t--) 
#define mod 10000007
using namespace std;
signed main()
{
    fastIO;
    TEST(t)
    {
        int n;
        cin>>n;
        vector<int>a(n+1);
        vector<int>h(n+1,0);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            h[a[i]]++;
        }
        queue<int>q;
        for(int i=1;i<=n;i++)
        if(h[i]==0)
        q.push(i);
        int ans=2;
        while(!q.empty())
        {
            ans++;
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                int el=q.front();
                q.pop();
                h[a[el]]--;
                if(h[a[el]]==0) q.push(a[el]);
            }
        }
        cout<<ans<<"\n";
 
    }
}