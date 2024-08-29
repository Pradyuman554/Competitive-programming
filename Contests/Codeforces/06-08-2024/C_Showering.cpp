#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
    int t;  cin>>t;
    while(t--){
        int n, shower, day;
        cin>>n>>shower>>day;
        
        vector<vector<int>> arr(n, vector<int>(2));
        
        for(int i=0; i<n; i++){
            cin>>arr[i][0]>>arr[i][1];
        }
        
        bool done = false;
        
        int end=arr[0][1];
        if(arr[0][0]>=shower){
            cout<<"YES"<<endl;
            continue;
        }
 
        for(int i=1; i<n; i++){
            if(arr[i][0]-end>=shower){
                cout<<"YES"<<endl;
                done = true;
                break;
            }
            else{
                end=arr[i][1];
            }
        }
        
        if(!done){
            if(day-end>=shower) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    
    return 0;
}