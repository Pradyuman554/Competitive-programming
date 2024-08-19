#include <iostream>
#include <cassert>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void test_case()
{
  int n, q;
  cin >> n >> q;
  map<string, vector<int>> occ;
  const vector<string> all = {"BG", "BR", "BY", "GR", "GY", "RY"};
  vector<string> types;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    occ[s].push_back(i);
    types.push_back(s);
  }
  while (q--) {
    int x, y;
    cin >> x >> y;
    --x; --y;
    if (x > y)
      swap(x, y);
    string s1 = types[x];
    string s2 = types[y];
    if (s1[0] == s2[0] || s1[0] == s2[1] || s1[1] == s2[0] || s1[1] == s2[1]) {
      cout << y - x << "\n";
      continue;
    }
    int answer = 1e9;
    for (string s: all) {
      if (s == s1 || s == s2)
        continue;
      auto it = lower_bound(occ[s].begin(), occ[s].end(), x);
      if (it != occ[s].end()) {
        answer = min(answer, abs(*it - x) + abs(y - *it));
      }
      if (it != occ[s].begin()) {
        it--;
        answer = min(answer, abs(*it - x) + abs(y - *it));
      }
    }
    if (answer == 1e9)
      cout << "-1\n";
    else
      cout << answer << "\n";
  }

}

int main()
{
  ios::sync_with_stdio(false);
 
  int tc;
  cin >> tc;
  while (tc--)
    test_case();
 
  return 0;
}