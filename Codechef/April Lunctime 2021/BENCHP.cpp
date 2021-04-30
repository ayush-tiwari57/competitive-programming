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
    ll n,w,wr;
    cin>>n>>w>>wr;
    map<ll,ll> m;
    ll ma=0;
    forn(i,0,n){
        ll x;
        cin>>x;
        m[x]++;
        ma=max(ma,x);
    }
    ll ans=wr;
    forn(i,1,ma+1){
        if(m[i]>=2){
            if(m[i]%2==0) ans+=m[i]*i;
            else ans+=(m[i]-1)*i;
        }
        if(ans>=w) {cout<<"YES"<<endl;
        return;}
    }
    // cout<<ans<<endl;
    if(ans>=w) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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