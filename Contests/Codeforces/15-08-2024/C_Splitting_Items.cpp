#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(array) sort(array.begin(), array.end())
 
ll solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    srt(a);
    ll cumDiff = 0;
    for(int i=n-1; i>=((n&1) ? 2 : 1); i-=2) {
        cumDiff += (a[i] - a[i-1]);
    }
    if(cumDiff <= k) {
        if(n&1) {return a[0];}
        else {return 0;}
    } else {
        if(n&1) {return (a[0]+(cumDiff-k));}
    }
    return (cumDiff - k);
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << endl;
    }
    return 0;
}