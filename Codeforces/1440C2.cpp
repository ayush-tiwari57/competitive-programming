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
#define maxn 104
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;


char a[maxn][maxn];
vector<vector<int>> res;
void f(int x1, int y1, int x2, int y2, int x3, int y3) {
    a[x1][y1] = (a[x1][y1] == '0' ? '1' : '0');
    a[x2][y2] = (a[x2][y2] == '0' ? '1' : '0');
    a[x3][y3] = (a[x3][y3] == '0' ? '1' : '0');
    res.pb({x1, y1, x2, y2, x3, y3});
}
int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--){
        res.clear();
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }
        for (int i = 1; i <= n - 2; i++) {
            for (int j = 1; j <= m; j++) {
                if (a[i][j] == '1') {
                    f(i, j, i + 1, j, i + 1, j == m ? j - 1 : j + 1);
                }
            }
        }
        for (int j = 1; j < m; j++) {
            if (a[n - 1][j] == '1' && a[n][j] == '1') f(n - 1, j, n, j, n, j + 1);
            else if (a[n - 1][j] == '1' && a[n][j] == '0') f(n - 1, j, n - 1, j + 1, n, j + 1);
            else if (a[n - 1][j] == '0' && a[n][j] == '1') f(n, j, n - 1, j + 1, n, j + 1);
        }
        if (a[n - 1][m] == '1' && a[n][m] == '1') {
            f(n - 1, m - 1, n, m - 1, n, m);
            f(n - 1, m - 1, n, m - 1, n - 1, m);
        } else if (a[n - 1][m] == '1' && a[n][m] == '0') {
            f(n - 1, m, n - 1, m - 1, n, m - 1);
            f(n - 1, m, n, m, n, m - 1);
            f(n - 1, m - 1, n - 1, m, n, m);
        } else if (a[n - 1][m] == '0' && a[n][m] == '1') {
            f(n, m, n - 1, m - 1, n, m - 1);
            f(n - 1, m, n, m, n, m - 1);
            f(n - 1, m - 1, n - 1, m, n, m);
        }
        cout << res.size() << endl;
        for (auto i : res) {
            for (int j : i) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    return 0;
}