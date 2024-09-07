#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve() {
    int x,y,k;
    cin>>x>>y>>k;

    if(x<=k && y<=k){
        cout<<2<<endl;
        return;
    }

    else if(x>y){
        int sum = x+y;
        int num = ceil( (double)sum/k );
        cout<<num+1<<endl;
        return;
    }

    else{
        int sum = x+y;
        int num = ceil( (double)sum/k );
        cout<<num+2<<endl;
        return;
    }

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