// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 1000000007

// long long sage(long long x, vector<bool>& ready, vector<long long>& value, vector<long long>& coins) {
//     if (x < 0) return INT_MAX;
//     if (x == 0) return 0;

//     if (ready[x]) return value[x];

//     long long best = INT_MAX;

//     for (auto c : coins) {
//         if (x - c >= 0) {  // Ensure we do not go out of bounds
//             long long res = sage(x - c, ready, value, coins);
//             if (res != INT_MAX) {
//                 best = min(best, res + 1);
//             }
//         }
//     }

//     value[x] = best;
//     ready[x] = true;
//     return best;
// }

// long long solve(long long n, vector<long long>& coins) {
//     vector<bool> ready(n + 1, false);
//     vector<long long> value(n + 1, INT_MAX);
//     value[0] = 0;  // Base case

//     return sage(n, ready, value, coins);
// }

// int main() {
//     ll test = 1;
//     cin >> test;
//     vector<long long> coins{1, 3, 6, 10, 15};  // Example coins
//     while (test--) {
//         long long n;
//         cin >> n;
//         long long result = solve(n, coins);
//         if (result == INT_MAX) {
//             cout << -1 << endl;  // If no solution exists
//         } else {
//             cout << result << endl;
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
 
// using namespace std;
 
// int getAns(int n){
//     int ans=0;
//     ans+=n/15;
//     n%=15;
//     ans+=n/6;
//     n%=6;
//     ans+=n/3;
//     n%=3;
//     ans+=n;
//     return ans;
// }

// int main(){
//     int testcases;
//     cin>>testcases;
//     for(int i=1;i<=testcases;i++){
//         int n;cin>>n;
//         if(n<10){
//             cout<<getAns(n)<<endl;
//         }else if(n<20){
//             cout<<min(getAns(n),getAns(n-10)+1)<<endl;
//         }else{
//             cout<<min({getAns(n),getAns(n-10)+1,getAns(n-20)+2})<<endl;
//         }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     cin.tie(nullptr);
//     int testcases;
//     cin >> testcases;
//     for (int t = 1; t <= testcases; t++)
//     {
//         int n;
//         cin >> n;
//         int ans = 1e9;
//         for(int ones = 0; ones <= 2; ones++){
//             for(int threes = 0; threes <= 1; threes++){
//                 for(int sixes = 0; sixes <= 4; sixes++){    //Kyuki 24 tak ke character banana, 6 ke madhyam se zyada asan rahega, na ki 10 ke madhyam se
//                     for(int tens = 0; tens <= 2; tens++){   //Vaise hi 20 banana 10(10+10) ke madhyam se zyada asan rahega, na ki 15(15+3+1+1) se
//                         int brute_sum = 1*ones + 3*threes + 6*sixes + 10*tens;
//                         if(brute_sum <= n && (n-brute_sum)%15 == 0){    //Kyuki 15 ko to aise hi naap sakte hai fir
//                             ans = min(ans, ones + threes + sixes + tens + (n-brute_sum)/15);
//                         }
//                     }
//                 }
//             }
//         }
//         cout << ans << endl;
//     }
// }