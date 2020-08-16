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


int dp[201][201][201];
void solution(){

    // This is the main code
    int r,g,b;
    cin>>r>>g>>b;
    vector<int> ar(r),ag(g),ab(b);
    forn(i,0,r) cin>>ar[i];
    forn(i,0,g) cin>>ag[i];
    forn(i,0,b) cin>>ab[i];
    sort(all(ar));
    reverse(all(ar));
    sort(all(ag));
    reverse(all(ag));
    sort(all(ab));
    reverse(all(ab));
    int ans=0;
    forn(i,0,r+1){
        forn(j,0,g+1){
            forn(k,0,b+1){
                if(i<r && j<g) dp[i+1][j+1][k]=max(dp[i+1][j+1][k],dp[i][j][k]+ar[i]*ag[j]);
                if(i<r && k<b) dp[i+1][j][k+1]=max(dp[i+1][j][k+1],dp[i][j][k]+ar[i]*ab[k]);
                if(j<g && k<b) dp[i][j+1][k+1]=max(dp[i][j+1][k+1],dp[i][j][k]+ag[j]*ab[k]);
                ans=max(ans,dp[i][j][k]);
            }
        }
                // cout<<ans<<endl;
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