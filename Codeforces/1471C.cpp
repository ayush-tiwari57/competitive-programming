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
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n),b(m),flag(n,0);
    forn(i,0,n) cin>>a[i];
    forn(i,0,m) cin>>b[i];
    ll ans=0,mi=0;
    sort(all(a),greater<ll>());
    forn(i,0,n){
        mi=min(mi,a[i]-1);
        if(flag[mi]) ans+=b[mi];
        else{
            flag[mi]=1;
            ans+=b[mi];
            mi++;
        }
    }
    cout<<ans<<endl;
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