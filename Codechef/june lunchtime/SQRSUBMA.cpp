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
    ll n,x,cnt=0;
    cin>>n>>x;
    ll a[n+1];
    forn(i,0,n) cin>>a[i];
    ll mat[n+1][n+1];  
    forn(i,0,n){
        forn(j,0,n) mat[i][j]=a[i]+a[j];
    }
    ll dp[n + 1][n + 1]; 
  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
            dp[i + 1][j + 1] = dp[i + 1][j] + dp[i][j + 1] - dp[i][j] + mat[i][j];
    }
    forn(k,1,n+1){
        for(int i=0;i<n;i+=k){
            for(int j=0;j<n;j+=k){
                ll sum=dp[i+k][j+k]-dp[i+k][j]-dp[i][j+k]+dp[i][j];
                if (sum==x) cnt++;
            }
        }
    } 
    cout<<cnt<<endl;
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