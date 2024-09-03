#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        if(a%2){
            cout<<"NO"<<endl;
            continue;
        }

        if(a>=b){
            cout<<"YES"<<endl;
            continue;
        }

        if(b%2==1){
            if(a>=2)    cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;  continue;
        }

        cout<<"NO"<<endl;
    }
    return 0;
}