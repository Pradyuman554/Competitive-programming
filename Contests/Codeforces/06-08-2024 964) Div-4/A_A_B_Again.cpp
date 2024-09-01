#include<iostream>
using namespace std;
 
int main(){
    int t;  cin>>t;
    
    while(t--){
        int sum=0;
        int num;    cin>>num;
        
        sum += (num%10 + num/10);
        cout<<sum<<endl;
    }
    
    return 0;
}