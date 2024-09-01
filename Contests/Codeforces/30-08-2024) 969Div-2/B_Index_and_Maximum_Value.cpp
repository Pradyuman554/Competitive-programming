#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define forn(n, i) for(int i=0; i<n; i++)
void solve() {
    int n, m;  cin>>n>>m;
    vector<int> arr(n);
    forn(n, i) cin>>arr[i];
    int num = *max_element(arr.begin(), arr.end());

    forn(m, i){
        char c; cin>>c;
        int a,b;    cin>>a>>b;
        //NOTE THAT THIS IS COMPARISON IN THE VALUE AND NOT THE INDEX. HENCE THE SOLUTION WORKS, OTHERWISE IT WOULDNT HAVE
            if(num>=a && num<=b){
                if(c=='+')  num++;
                else num--;
            }
            cout<<num<<" ";
    }
    cout<<endl;
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


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int n, m;
//         cin >> n >> m;

//         vector<int> arr(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> arr[i];
//         }

//         int v = *max_element(arr.begin(), arr.end());

//         for (int j = 0; j < m; ++j) {
//             char c;
//             int l, r;
//             cin >> c >> l >> r;

//             if (l <= v && v <= r) {
//                 if (c == '+') {
//                     v = v + 1;
//                 } else {
//                     v = v - 1;
//                 }
//             }

//             cout << v;
//             if (j != m - 1) {
//                 cout << " ";
//             } else {
//                 cout << endl;
//             }
//         }
//     }

//     return 0;
// }
