#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        // Check if it's possible to achieve a sum of 0
        if ((a % 2 == 0 && (b % 2 == 0 || b % 2 == 1)) || (a % 2 == 1 && b % 2 == 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
