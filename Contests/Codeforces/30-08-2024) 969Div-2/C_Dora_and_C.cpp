#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long a, b;
    cin >> n >> a >> b;
    vector<long long> c(n);

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    long long min_c = *min_element(c.begin(), c.end());
    long long max_c = *max_element(c.begin(), c.end());

    if (a == b) {
        // All elements can be made the same
        cout << 0 << "\n";
    } else {
        // Calculate the minimized range
        cout << min(b - a, max_c - min_c) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
