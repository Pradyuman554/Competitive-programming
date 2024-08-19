#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t;
    //
    while(t--){
        long long n;  cin>>n;
        vector<long long> arr(n);
        for(long long i=0; i<n; i++)  cin>>arr[i];
        if(n==2){
            if(arr[1]-arr[0]>1)    cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}