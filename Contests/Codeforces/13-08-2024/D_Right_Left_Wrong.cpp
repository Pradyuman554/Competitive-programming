#include <bits/stdc++.h>
using namespace std;
#define int long long
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		vector<int> a(n + 1), prefixSum(n + 1);
		prefixSum[0] = 0;

		for (int i = 1; i <= n; i++){
			cin >> a[i];
			prefixSum[i] = a[i] + prefixSum[i - 1];
		}

		string s;
		cin >> s;

		int res = 0, p = 0, q = n - 1;

		while (p < q){
			while (p < q && s[p] == 'R')	p++; // Exclude leading R's coz they are of no use
			while (p < q && s[q] == 'L')	q--; // Exclude trailing L's coz they also are of no use

			if (p < q)
				res += prefixSum[q + 1] - prefixSum[p];
			p++, q--;
		}
		
		cout << res << '\n';
	}
}