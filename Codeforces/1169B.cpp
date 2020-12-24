#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#ifdef ONPC
  mt19937 rnd(228);
#else
  mt19937 rnd(chrono::high_resolution_clock::now().time_since_epoch().count());
#endif

int main() {
#ifdef ONPC
  freopen("a.in", "r", stdin);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  vector <pair <int, int> > pairs;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    pairs.emplace_back(a, b);
  }
  vector <int> values = {pairs[0].first, pairs[0].second};
  for (int x : values) {
    vector <int> val(n);
    int all = 0;
    for (auto c : pairs) {
      if (c.first != x && c.second != x) {
        val[c.first]++, val[c.second]++, all++;
      }
    }
    if (*max_element(val.begin(), val.end()) == all) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
}