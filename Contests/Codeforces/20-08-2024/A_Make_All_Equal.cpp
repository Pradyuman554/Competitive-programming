#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;  cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)  cin>>arr[i];
    
    if(n==1){
        cout<<0<<endl;
        return;
    }

    map<int, int> mp;
    //Calculate freq of every element and subtract highest freq from n
    for(int i=0; i<n; i++)  mp[arr[i]]++;
    int highest = INT_MIN;
    
    for(auto it: mp)    highest = max(highest, it.second);

    cout<<n-highest<<endl;
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
