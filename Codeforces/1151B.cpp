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


void solution(){

    // This is the main code
    	ll i, j, k, n, m, ct = 0, t, ans = 0;
	cin >> n >> m;
	ll a[n][m];
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		ans = a[i][0] ^ ans;
	}
	if (ans > 0) {
		cout << "TAK\n";
		for (i = 0; i < n; i++) cout << "1 ";
		return;
	}
	for (i = 0; i < n; i++) {
		for (j = 1; j < m; j++) {
			if (a[i][j] != a[i][j - 1]) {
				cout << "TAK\n";
				for (k = 0; k < i; k++) cout << "1 ";
				cout << j + 1 << " ";
				for (k = i + 1; k < n; k++) cout << "1 ";
				return;
			}
		}
	}
	cout << "NIE\n";
	return;


}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}