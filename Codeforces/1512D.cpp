/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long

//STL
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define mp make_pair 
#define all(v) v.begin(), v.end()

//loops
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)

// defined values
#define maxn 200004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;


void no() {
  cout << "-1" << endl;
}

void solve() {
  int n;
  cin >> n;
  vector<int> b(n + 2);
  for (int &x : b) {
    cin >> x;
  }

  multiset<int> have(b.begin(), b.end());
  long long sum = accumulate(b.begin(), b.end(), 0LL);
  for (int x : b) {
    have.erase(have.find(x));
    sum -= x;
    if (sum % 2 == 0 && sum <= 2'000'000'000 && have.find(sum / 2) != have.end()) {
      have.erase(have.find(sum / 2));
      for (int y : have) {
        cout << y << " ";
      }
      cout << endl;
      return;
    }
    sum += x;
    have.insert(x);
  }
  no();
}

int main() {
  int tests;
  cin >> tests;
  while (tests-- > 0) {
    solve();
  }
  return 0;
}