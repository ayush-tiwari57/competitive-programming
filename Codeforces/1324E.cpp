#include <bits/stdc++.h>

using namespace std;

bool in(int x, int l, int r) {
	return l <= x && x <= r;
}

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n, h, l, r;
	cin >> n >> h >> l >> r;
	vector<int> a(n);
	for (auto &it : a) cin >> it;
	vector<vector<int>> dp(n + 1, vector<int>(n + 1, INT_MIN));
	dp[0][0] = 0;
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += a[i];
		for (int j = 0; j <= n; ++j) {
			dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + in((sum - j) % h, l, r));
			if (j < n) dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + in((sum - j - 1) % h, l, r));
		}
	}
	
	cout << *max_element(dp[n].begin(), dp[n].end()) << endl;
	
	return 0;
}