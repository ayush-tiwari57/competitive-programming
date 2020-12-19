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
#define forn(i,a,b) for(int i=a; i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)

// defined values
#define maxn 200004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

ll findGCD(vector<ll> a, int n) 
{ 
    ll result = a[0]; 
    for(int i=1;i<n;++i) 
    { 
        result = gcd(a[i], result); 
  
        if(result == 1) 
        { 
           return 1; 
        } 
    } 
    return result; 
} 

void solution(){

    // This is the main code
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(all(a));
    if(n==1){
        forn(i,0,m) cout<<a[0]+b[i]<<" ";
        cout<<endl;
        return;
    }
    vector<ll> c;
    for(int i=1;i<n;i++) c.pb(a[i]-a[i-1]);
    ll x =findGCD(c,n-1);
    for(int i=0;i<m;i++){
        ll ans= gcd(x,a[0]+b[i]);
        cout<<ans<<" ";
    }
    cout<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    // cin>>t;  
    while (t--)
    {
        solution();
    }
    return 0;
}