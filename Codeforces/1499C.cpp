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
    ll n;
    cin>>n;
    ll c[n];    
    forn(i,0,n) cin>>c[i];
    ll ans=n*c[0]+n*c[1];
    ll dp[n];
    dp[0]=n;
    dp[1]=n;
    forn(i,2,n){
        ll temp=ans;
        ll x;
        if(c[i-2]>c[i]){
            dp[i]=dp[i-2]-1;
            dp[i-2]=1;
            x=temp-c[i-2]*(dp[i])+c[i]*dp[i];
        }
        else{
            dp[i]=1;
            dp[]
        }
        ans=min(ans,);
    }
    cout<<ans<<endl;
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