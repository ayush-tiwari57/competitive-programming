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

struct val{
    int cnt;
    int turn;
};

void solution(){

    // This is the main code
    int n,m;
    cin>>n>>m;
    vector<string> a;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        a.pb(s);
    }
    val dp[n][n];
    dp[0][0].cnt=dp[0][0].turn=0;
    forn(i,0,n){
        forn(j,0,m){
            if(i==0 && j==0) continue;
            if(i==0){
                if(dp[i][j-1].turn==0){
                    if(a[i][j]=='+') dp[i][j].cnt=dp[i][j-1].cnt+1;
                    else dp[i][j].cnt=dp[i][j-1].cnt-1;
                    dp[i][j].turn=1;
                }
                else{
                    if(a[i][j]=='+') dp[i][j].cnt=dp[i][j-1].cnt-1;
                    else dp[i][j].cnt=dp[i][j-1].cnt+1;
                    dp[i][j].turn=0;
                }
                // cout<<"{"<<dp[i][j-1].cnt<<","<<dp[i][j-1].turn<<"}"<<" "<<"{"<<dp[i][j].cnt<<","<<dp[i][j].turn<<"}";
                // cout<<endl;
            }
            else if(j==0){
                if(dp[i-1][j].turn==0){
                    if(a[i][j]=='+') dp[i][j].cnt=dp[i-1][j].cnt+1;
                    else dp[i][j].cnt=dp[i-1][j].cnt-1;
                    dp[i][j].turn=1;
                }
                else{
                    if(a[i][j]=='+') dp[i][j].cnt=dp[i-1][j].cnt-1;
                    else dp[i][j].cnt=dp[i-1][j].cnt+1;
                    dp[i][j].turn=0;
                }
            }
            else{
                if(j>0 && dp[i][j-1].turn==0){
                   dp[i][j].turn =1;
                   int x=dp[i][j-1].cnt;
                   if(dp[i-1][j].cnt>dp[i][j-1].cnt) x=dp[i-1][j].cnt;
                   if(a[i][j]=='+') dp[i][j].cnt=x+1;
                   else dp[i][j].cnt=x-1;
                }
                else{
                    dp[i][j].turn =0;
                   int x=dp[i][j-1].cnt;
                   if(dp[i-1][j].cnt>dp[i][j-1].cnt) x=dp[i-1][j].cnt;
                   if(a[i][j]=='+') dp[i][j].cnt=x-1;
                   else dp[i][j].cnt=x+1;
                }
            }
            // cout<<i<<" "<<j<<endl;
            // cout<<"{"<<dp[i][j].cnt<<","<<dp[i][j].turn<<"}"<<endl;
        }
    }
    // forn(i,0,n){
    //     forn(j,0,m) cout<<"{"<<dp[i][j].cnt<<","<<dp[i][j].turn<<"}"<<" ";
    //     cout<<endl;
    // }
    if(dp[n-1][m-1].cnt==0) cout<<"Draw";
    else if(dp[n-1][m-1].cnt>0) cout<<"Takahashi";
    else cout<<"Aoki";
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