/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long
#define Mod 1000000007
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)
#define maxn 1000004
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

ll dp[maxn],a[maxn],l[maxn],r[maxn],d[maxn],op_counter[maxn];
void solution(){

    // This is the main code
    int n,m,k,x,y;
    cin>>n>>m>>k;
    forn(i,0,n) cin>>a[i];
    forn(i,0,m) cin>>l[i]>>r[i]>>d[i];
    forn(i,0,k){
        cin>>x>>y;
        op_counter[x-1]++;
        op_counter[y]--;
    }
    forn(i,1,maxn) op_counter[i]+=op_counter[i-1];
    forn(i,0,m){
        dp[l[i]-1]+=op_counter[i]* d[i];
        dp[r[i]]-=op_counter[i]* d[i];
    }
    forn(i,1,maxn) dp[i]+=dp[i-1];
    forn(i,0,n) cout<<a[i]+dp[i]<<" ";
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