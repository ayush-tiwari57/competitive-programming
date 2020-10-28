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

int n,dp[201][401];
vector<int> a(201);

int func(int ind,int ti){
    if(ind==n) return 0;
    if(ti>2*n) return 2e9;
    if(dp[ind][ti]!=-1) return dp[ind][ti];
    int ans=2e9;
    ans=min(ans,abs(a[ind]-ti)+func(ind+1,ti+1));
    ans=min(ans,func(ind,ti+1));
    return dp[ind][ti]=ans;
}

void solution(){

    // This is the main code
    cin>>n;
    a.resize(n);
    forn(i,0,n) cin>>a[i];
    sort(all(a));
    memset(dp,-1,sizeof(dp));
    cout<<func(0,1)<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
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