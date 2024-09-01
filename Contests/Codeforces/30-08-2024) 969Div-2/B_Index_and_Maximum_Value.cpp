#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, m;
    cin >> n >> m;
    vector<ll> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll global_increment = 0;
    vector<ll> max_values;

    for (int i = 0; i < m; i++) {
        char op;
        ll l, r;
        cin >> op >> l >> r;

        if (op == '+') {
            global_increment += 1;
        } else if (op == '-') {
            global_increment -= 1;
        }

        // Since the operation is uniform across all elements, just find the current max and apply the global increment
        ll max_value = *max_element(arr.begin(), arr.end()) + global_increment;
        max_values.push_back(max_value);
    }

    for (ll res : max_values) {
        cout << res << " ";
    }
    cout << endl;
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
