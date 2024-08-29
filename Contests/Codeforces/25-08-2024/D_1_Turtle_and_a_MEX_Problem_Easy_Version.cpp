#include <bits/stdc++.h>
#define pb emplace_back
#define fst first
#define scd second
#define mkp make_pair
#define mems(a, x) memset((a), (x), sizeof(a))

using namespace std;
typedef long long ll;
typedef double db;
typedef unsigned long long ull;
typedef long double ldb;
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
        for (int i = 0; i <= t + 5; ++i) {
            vis[i] = 0;
        }
        for (int i = 1; i <= t; ++i) {
            cin >> a[i];
            if (a[i] <= t + 4) {
                vis[a[i]] = 1;
            }
        }
        ll mex = 0;
        while (vis[mex]) {
            ++mex;
        }
        vis[mex] = 1;
        while (vis[mex]) {
            ++mex;
        }
        k = max(k, mex);
    }
    if (k >= m) {
        cout << (m + 1) * k << endl;
    } else {
        cout << k * k + (m + k) * (m - k + 1) / 2 << endl;
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
