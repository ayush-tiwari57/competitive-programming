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
    int r,c;
    int dp[501][501];
    cin>>r>>c;
    forn(i,0,r+1){
        forn(j,0,c+1) dp[i][j]=INT_MAX;
    }
    int a[r+1][c+1],b[r+1][c+1];
    forn(i,1,r+1){
        forn(j,1,c) cin>>a[i][j];
    }
    forn(i,1,r){
        forn(j,1,c+1) cin>>b[i][j];
    }
    dp[1][1]=0;
    // forn(i,2,c+1) dp[1][i]=dp[1][i-1]+a[1][i-1];
    // forn(i,2,r+1) dp[i][1]=dp[i-1][1]+b[i-1][1];
    forn(i,1,r+1){
        forn(j,1,c+1){
            // dp[i][j]=min(dp[i-1][j]+)
            if(i>1) dp[i][j]=min(dp[i][j],dp[i-1][j]+b[i-1][j]);
            if(j>1) dp[i][j]=min(dp[i][j],dp[i][j-1]+a[i][j-1]);
        }
    }
    cout<<dp[3][2]<<endl;
    cout<<dp[r][c];
    // forn(i,2,r+1) dp[i][c]=b[i-1]
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