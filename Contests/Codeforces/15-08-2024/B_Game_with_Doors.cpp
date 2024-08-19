#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t;

    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        if(x1==x2 && y1==y2){   //If equal
            cout<<y1-x1<<endl;
            continue;
        }
        //If disjoint
        
        if( x2>y1 || x1>y2 ){
            cout<<1<<endl;
            continue;
        }

        int end = min(y1, y2);
        int start = max(x1, x2);
        int inter = end - start+1; // Calculate the intersection length

        cout << inter << endl;
    }

    return 0;
}

/*
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 > y2 || x2 > y1)
        {
            cout << 1 << endl;
        }
        else
        {
            int res = 1;
            if (x1 > x2)
            {
                swap(x1, x2);
                swap(y1, y2);
            }
            if (y2 <= y1)
            {
                res += y2 - x2 + 1;
            }
            else
            {
                res += y1 - x2 + 1;
            }
            if (x1 == x2)
            {
                res--;
            }
            if (y2 == y1)
            {
                res--;
            }
            cout << res << endl;
        }
    }
    return 0;
}
*/