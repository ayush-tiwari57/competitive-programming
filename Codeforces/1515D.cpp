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
    ll n,l,r,x,m=0;
    multiset<ll> left, right;
    cin>>n>>l>>r;
	forn (i, 0,n) {
		int t; cin >> t;
        if(i+1<=l)
		    left.insert(t);
        else{
		auto it = left.lower_bound(t);
		if (it == left.end() or * it != t) right.insert(t);
		else left.erase(it);

        }
	}

	l = left.size(), r = right.size();

	if (l == r) {
		cout << l << endl;
		return;
	}

	if (r > l) {
		swap(left, right);
    	swap(l, r);
	}

	ll diff = (l - r) >> 1, cnt = 0;
	map<ll, ll> ml;
	for (auto it : left) ml[it]++;
	for (auto [u, v] : ml) cnt += v / 2;

	if (cnt >= diff) {
		cout << r + diff << endl;
		return;
	}

	ll ans = r + cnt + 2 * (diff - cnt);
	cout << ans << endl;
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