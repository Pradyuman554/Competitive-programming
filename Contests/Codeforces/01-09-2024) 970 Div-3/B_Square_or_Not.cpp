#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve() {
    int n;  cin>>n;
    string s;
    int zeros = 0;
    for(int i=0; i<n; i++){
        char a;  cin>>a;
        if(a=='0')  zeros++;
        s.push_back(a);
    }

    double root = sqrt(n);
    if( root != floor(root) ){
        cout<<"No"<<endl;
        return;
    }

    int expected = n - 2*root - 2*(root-2);
    if(zeros == expected)   cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

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