#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3};

    cout << "Original permutation: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // Generate the next permutation using the inbuilt function
    while(next_permutation(arr.begin(), arr.end())){
        for(int i: arr) cout<<i<<" ";
        cout<<endl;
    }

    cout << endl;

    return 0;
}