#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<climits>
#include<cstring>
#include<cassert>
#include<unordered_map>
#include<unordered_set>

using namespace std;

int main() {
    long long t;  cin>>t;
    while(t--){

        long long n, k;
        cin>>n>>k;
        vector<long long> ans(n);
        for(long long i=0; i<n; i++)  cin>>ans[i];
        sort(ans.begin(), ans.end());
        long long sumA=0, sumB=0;
        if(n%2==0){  //Even
            for(long long i=1; i<n; i+=2) sumA += ans[i];
            for(long long i=0; i<n; i+=2) sumB += ans[i];
        }
        else{
            for(long long i=0; i<n; i+=2) sumA += ans[i];
            for(long long i=1; i<n; i+=2) sumB += ans[i];
        }

        long long difference = sumA-sumB;
        if(k>=difference){
            cout<<0<<endl;
            continue;
        }
        else{
            cout<<difference-k<<endl;
        }
    }
    return 0;
}