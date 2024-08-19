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
    ll difference = 0;
    for(int i=n-1; i>=((n&1) ? 2 : 1); i-=2) {  //Iterate till 2 (the first element is not going to be considered) if odd else iterate till 1
        difference += (a[i] - a[i-1]);
    }
    if(difference <= k) {  //If difference is managable using k
        if(n&1) return a[0];  //If odd return the first element
        else return 0;    //Else return 0
    } else {
        if(n&1) return (a[0]+(difference-k));    //If difference is not managable by k
    }
    return difference - k;
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