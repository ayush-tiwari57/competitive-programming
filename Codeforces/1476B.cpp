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

vector<ll> rP(vector<ll> &x){
	ll sum=0;
	std::vector<ll> v;
	for(auto it: x){
		sum+=it;
		v.pb(sum);
	}
	return v;
}

void solution(){

    // This is the main code
    int n;
    double k;
    cin>>n>>k;
	vector<ll> p(n), pref;
    for(auto &it: p) cin>>it;    
    ll diff = LONG_MIN;
	pref=rP(p);


	for (int i = n - 1; i > 0; --i) {
		double x = (p[i] / (1.0 * (pref[i - 1])));
		// deb(x)
		if (x*100 > k) {
			ll d = ceil( (p[i]*100) /k);
			diff = max(diff, d - pref[i - 1]);
		}
	}
	if (diff == LONG_MIN) diff = 0;
	cout << diff << endl;

}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}