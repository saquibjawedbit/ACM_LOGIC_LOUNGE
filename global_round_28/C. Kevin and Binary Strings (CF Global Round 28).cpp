#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define all(x) (x).begin(), (x).end()
#define  read(a) for(auto &x:a) cin>>x;
#define  print(a) for(auto x:a) cout<<x<<" ";
#define MOD 1000000007

void solve()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    read(vec);
    map<int,bool>used;
    map<int,int>freq;
    for(int x : vec)
    {
        used[x]=1;
    }
    int unuse=1;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(freq[vec[i]]==0)
        {
            ans.push_back(vec[i]);
            freq[vec[i]]++;
        }
        else
        {
            while(used[unuse])
                unuse++;
            ans.push_back(unuse);
            used[unuse]=1;
        }
    }
    print(ans);
    return;
}

signed main()
{
    fastio();
    int t=1;
    cin>>t;
    while(t!=0)
    {
    solve();
    cout<<"\n";
    t--;
    }
}