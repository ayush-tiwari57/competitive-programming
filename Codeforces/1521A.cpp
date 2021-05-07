/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

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
    ll a,b;
    cin>>a>>b;
    vector<ll> v;
	v.pb(a * (2 * b + 1));
	v.pb(a * (2 * b - 1));
	v.pb(4 * a * b);

	int cnt = 0;

	for (int i = 0; i < 3; ++i)
		if (v[i] % (a * b) == 0) {cnt++;}

	if (cnt != 1) { cout << "NO\n"; return; }

	cout << "YES"<<endl;
	for (auto it : v) cout << it << " ";
	cout << endl;
	// cout << endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    int t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}