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
    ll num1,num2;
    cin>>n;
    int c[n+1];
    forn(i,1,n+1) cin>>c[i];
    ll dp[n+1][2]={};
    dp[1][1]=c[1];
    // cout<<"yo";
    string s[n+1];
    cin>>s[1];
    forn(i,2,n+1){
        cin>>s[i];
        string x=s[i-1];
        string y=s[i];
        reverse(all(x));
        reverse(all(y));
        num1=num2=1e18;
        if(s[i-1]>s[i] && x>s[i]) dp[i][0]=1e18;
        else{
            if(s[i-1]<=s[i]) num1=dp[i-1][0];
            if(x<=s[i]) num2=dp[i-1][1];
            dp[i][0]+=min(num1,num2);
        }
        num1=num2=1e18;
        if(s[i-1]>y && x>y) dp[i][1]=1e18;
        else{
            if(s[i-1]<=y) num1=dp[i-1][0]+c[i];
            if(x<=y) num2=dp[i-1][1]+c[i];
            dp[i][1]+=min(num1,num2);
        }
        // cout<<dp[i][0]<<" "<<dp[i][1]<<endl;
        if(dp[i][0]>=1e18 && dp[i][1]>=1e18){
            cout<<"-1";
            exit(0);
        }
    }
    cout<<min(dp[n][0],dp[n][1]);
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