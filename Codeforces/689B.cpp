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
#define maxn 1000004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int ans[maxn]={0}, a[maxn]={0};

void dfs(int i,int cnt){
    if(ans[i]<=cnt) return;
    ans[i]=cnt;
    dfs(a[i],cnt+1);
    dfs(i+1,cnt+1);
    dfs(i-1,cnt+1);
}

void solution(){

    // This is the main code
    int n;
    cin>>n;
    forn(i,1,n+1){
        cin>>a[i];
        ans[i]=maxn;
    }
    ans[0]=-1;
    dfs(1,0);
    forn(i,1,n+1) cout<<ans[i]<<" ";

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