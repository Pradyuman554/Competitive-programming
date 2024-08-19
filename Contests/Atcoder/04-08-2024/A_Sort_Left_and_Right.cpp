#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;  cin>>t;

    while(t--){
        int n;  cin>>n;
        bool sorted=true;
        vector<int> arr(n);
        for(int i=0; i<n; i++)  cin>>arr[i];
        for(int i=0; i<n-1; i++)  if(arr[i]>arr[i+1])   sorted=false;
        if(sorted)  cout<<0<<endl;
        else{
            vector<int> vec = arr;
            int smallest = *min_element(vec.begin(), vec.end()), largest=*max_element(vec.begin(), vec.end());
            if(smallest==vec[0]){
                cout<<1<<endl;
                continue;
            }
            else if(largest==vec[vec.size()-1]){
                cout<<1<<endl;
                continue;
            }

            int right=vec.size()-1;
            sort(vec.begin(), vec.end());
            int mid = 0 + (right-0)/2;
            if(vec[mid]==arr[mid])  cout<<1<<endl;
            else cout<<2<<endl;
        }
    }

    return 0;
}