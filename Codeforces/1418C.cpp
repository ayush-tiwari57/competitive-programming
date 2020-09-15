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

int dp[maxn][2],a[maxn],n;

int func(int i, int turn){
    if(i>=n) return 0;
    if(dp[i][turn]!=-1) return dp[i][turn];
    int m=2e9;
    if(turn==0){
        if(i<n && a[i]==1) m=min(m,1+func(i+1,1));
        if(i<n && a[i]==0) m=min(m,func(i+1,1));
        if(i+1<n && a[i]==0){
            if(a[i+1]==1) m=min(m,1+func(i+2,1));
            else m=min(m,func(i+2,1));
        }
        if(i+1<n && a[i]==1){
            if(a[i+1]==1) m=min(m,2+func(i+2,1));
            else m=min(m,1+func(i+2,1));
        }
    }
    else{
        m=min(m,min(func(i+1,0),func(i+2,0)));
    }
    dp[i][turn]=m;
    return m;
}

void solution(){

    // This is the main code
    cin>>n;
    forn(i,0,n) cin>>a[i];
    memset(dp,-1,sizeof(dp));
    func(0,0);
    cout<<dp[0][0]<<endl;
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