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

int dp[maxn],suff[maxn],x[maxn],ti[maxn],y[maxn];

void solution(){

    // This is the main code
    int r,n;
    cin>>r>>n;
    x[0]=1;
    y[0]=1;
    forn(i,1,n+1) cin>>ti[i]>>x[i]>>y[i];
    forn(i,1,n+1){
        dp[i]=-2e9;
        forn(j,max(0,i-2*r),i){
            if(abs(x[i]-x[j])+abs(y[i]-y[j])<=ti[i]-ti[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        if(i>2*r) dp[i]=max(dp[i],1+suff[i-2*r]);
        suff[i]=max(dp[i],suff[i-1]);
    }
    cout<<suff[n];
}

 
int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
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