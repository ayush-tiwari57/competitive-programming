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
    ll n,k;
    cin>>n>>k;
    ll val[n+1],w[n+1],v=0;
    forn(i,0,n){
        cin>>w[i]>>val[i];
        v+=val[i];
    }
    ll dp[n+1][v+1];
    forn(i,0,n+1){
        forn(j,0,v+1){
            if(i==0 || j==0){
                dp[i][j] = (j==0)?0:INT_MAX;
            }
            else{
                if(val[i-1]<=j) dp[i][j]=min(dp[i-1][j],w[i-1]+dp[i-1][j-val[i-1]]); 
                else dp[i][j]=dp[i-1][j];
            }
        }
    }
    ll ans=0;
    forn(i,0,n+1){
        for(ll j=0;j<=v;j++){
            if(dp[i][j]<=k) ans=max(ans,j);
        }
    }
    cout<<ans;
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