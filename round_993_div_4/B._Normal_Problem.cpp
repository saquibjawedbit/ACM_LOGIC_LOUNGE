#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long
#define TEST(t) int t; cin>>t; while(t--) 
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);


int main(){
	fastio();
    TEST(t){
        string s;
        cin >> s;
        reverse(s.begin() , s.end());
        for(int i=0; i<s.size() ; i++){
            if(s[i]=='p') s[i]='q';
            else if(s[i]=='q') s[i]='p';
        }
        cout << s << endl;
    }
}