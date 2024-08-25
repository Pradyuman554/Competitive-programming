#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n; cin>>n;
    string s;   s.resize(n);
    for(int i=0; i<n; i++)  cin>>s[i];
    if(n<2){
        cout<<"NO"<<endl;
    }
    else if(s[0]==s[s.length()-1])   cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
