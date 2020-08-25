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
    int n;
    cin>>n;
    string s,t="hard";
    cin>>s;
    ll a[n+1],dp[4][n+1]={0};
    forn(i,0,n) cin>>a[i];  
    forn(i,0,4){
        forn(j,0,n+1){
            if(j) dp[i][j]=dp[i][j-1];
            else dp[i][j]=0;
            if(s[j]==t[i]) dp[i][j]+=a[j];
            if(i) dp[i][j]=min(dp[i][j],dp[i-1][j]);
        }
    }
    cout<<dp[3][n];

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