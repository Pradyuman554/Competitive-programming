#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;

const int maxn = 200100;

ll n, m, a[maxn];
bool vis[maxn];

void solve() {
    cin >> n >> m;
    ll k = 0;

    while (n--) {
        int t;
        cin >> t;
        // Reset visibility array
        fill(vis, vis + t + 6, false);
        
        for (int i = 1; i <= t; ++i) {
            cin >> a[i];
            if (a[i] <= t + 4) {
                vis[a[i]] = true;
            }
        }
        
        ll mex = 0;
        while (vis[mex]) {
            ++mex;
        }
        vis[mex] = true;
        while (vis[mex]) {
            ++mex;
        }
        k = max(k, mex);
    }
    
    if (k >= m) {   //Agar hamara k bada hai to bas bas multiply multiply karna padta hai na, like 3>=2
        cout << (m + 1) * k << endl;
    } else {    //Like in test case, 3<6
        cout << ( (k*k) + k + (m*m) + m )/2 << endl;
    }
    
}

int main() {
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
