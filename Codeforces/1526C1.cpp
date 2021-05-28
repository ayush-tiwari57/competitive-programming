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
    ll n;
    cin>>n;
    vector<ll> a(n);
    forn(i,0,n) cin>>a[i];
    priority_queue <ll, vector<ll>, greater<ll> > pq;
    ll s=0,ans=0;
 
	forn (i,0,n) {
        ll x=a[i];
		s += x;
		pq.push(x);
		while (s<0) {
			s -= pq.top();
			pq.pop();
            // if(s<0) break;
		}
        ll si=pq.size();
		ans = max(ans, si);
	}
 
	cout<<ans<< endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    int t=1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}