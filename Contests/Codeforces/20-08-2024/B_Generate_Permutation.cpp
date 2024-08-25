#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;  cin>>n;
    if(n%2==0){
        cout<<-1<<endl;
        return;
    }
    vector<int> arr(n);
    int mid = (1+n)/2;
    arr[mid-1] = 1;
    int j = 2;
    for(int i=mid-2; i>=0; i--){
        arr[i] = j;
        j++;
    }
    for(int i=mid; i<n; i++){
        arr[i] = j;
        j++;
    }

    for(int j: arr) cout<<j<<" ";
    cout<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif

    ll test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
