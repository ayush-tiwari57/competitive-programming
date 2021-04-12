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
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    vector<int> b(n - 1);
    for (int &e : a) {
        cin >> e;
    }
    for (int &e : b) {
        cin >> e;
    }
    b.push_back(0);
    ll ans = 1e18;
    ll cur = 0;
    ll bal = 0;
    for (int i = 0; i < n; i++) {
        ans = min(ans, cur + max(0ll, (c - bal + a[i] - 1) / a[i]));
        ll newDays = max(0ll,( b[i] - bal + a[i] - 1) / a[i]);
        cur += newDays + 1;
        bal += a[i] * newDays - b[i];
    }
    cout << ans << "\n";
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
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