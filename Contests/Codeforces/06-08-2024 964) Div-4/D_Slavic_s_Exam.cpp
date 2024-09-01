#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
bool solve(string s, string t) {
    int m = s.size(), n = t.size();
    int i = 0, j = 0;
 
    while (i < m && j < n) {
        if (s[i] == t[j] || s[i]=='?') {
            j++;
        }
        i++;
    }
    
    return j == n;
}
 
string replaceQuestionMarks(string s, const string& t) {
    int s_len = s.size(), t_len = t.size();
    int s_index = 0, t_index = 0;
    
    while (s_index < s_len && t_index < t_len) {
        if (s[s_index] == '?') {
            s[s_index] = t[t_index];
            t_index++;
        } else if (s[s_index] == t[t_index]) {
            t_index++;
        }
        s_index++;
    }
    
    for (int i = 0; i < s_len; i++) {
        if (s[i] == '?') {
            s[i] = 'a';
        }
    }
    
    return s;
}
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s, t;
        cin >> s >> t;
        
        if (solve(s, t)) {
            cout << "YES\n";
            cout << replaceQuestionMarks(s, t) << "\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}