//We want the same digits TO BE FAR from each, as far as they can be coz for 2 letters to be a pleasant pair IF ONE OF THE MIDDLE 2 ELEMENTS IS DIFFERENT FROM THE bounding pair elements
/*
ddedf
Counting good pairs:
Same ones:
1. dd
2. dd
3. dd
Pleasant:
4. ddedf
5. dedf
6. edf

So. 6

For dfded
1. dfd
2. dfde
3. dfded
4. fde
5. fded
6. ded

So, 6, BUT UK WE GET THE IDEA. Similar elements need to be AS FAR AS POSSIBLE, otherwise pleasant vale main same aa jayega
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        ll l = 0, r = n - 1;
        while (l < r)
        {
            cout << s[l] << s[r];
            l++, r--;
        }
        if (l == r)
            cout << s[l];
        cout << endl;
    }
    return 0;
}