#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve() {
    int first=0, second=0;
    cin>>first>>second;
    if(second==3){
        cout<<1<<endl;
        return;
    }
    int diff = second-first+1;
    cout<< diff/4<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif

    ll test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}