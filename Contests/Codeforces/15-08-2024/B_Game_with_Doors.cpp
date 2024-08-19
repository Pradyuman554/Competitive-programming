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
    int t; cin>>t;

    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        if(x1==x2 && y1==y2){   //If equal
            cout<<y1-x1<<endl;
            continue;
        }
        //If disjoint
        if( (x1<x2 && y1<x2) || (x1>x2 && x1>y2) ){
            cout<<1<<endl;
            continue;
        }

        int end = min(y1,y2);
        int start = max(x1,x2);
        int extra=0;
        if(end<max(y1,y2))  extra++;
        if(start>min(x1,x2))    extra++;
        int inter = end-start+extra;
        cout<<inter<<endl;
    }

    return 0;
}