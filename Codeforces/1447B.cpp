#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<=n;i++)
#define pa pair<ll,ll>
#define vec vector<ll>
#define pb push_back
#define in insert
#define mp make_pair
#define F first
#define S second
//memset(x, 0, sizeof(x))
ll inf = (ll)1e18;
ll mod = 1e9 + 7;
ll max1 = (ll)1e9;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("err.txt", "w", stderr);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll i, j, k, n, m, ct = 0, t, ans = 0;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		ll a[n][m];
		ct = 0; ll min1 = 1e9; ll sum = 0;
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				cin >> a[i][j];
				if (a[i][j] <= 0) ct++;
				min1 = min(abs(a[i][j]), min1);
				sum += abs(a[i][j]);
			}
		}
		if (ct % 2 == 0) cout << sum << endl;
		else cout << sum - 2 * min1 << endl;
	}
	return 0;
}