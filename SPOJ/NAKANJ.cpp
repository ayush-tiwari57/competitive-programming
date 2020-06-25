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
#define fi first
#define se second

//loops
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)

// defined values
#define maxn 200004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int x[]={0,-1,-1,1,1,-2,-2,2,2};
int y[]={0,2,-2,2,-2,-1,1,-1,1};

ll bfs(ll a1,ll b1,ll a2,ll b2){
    ll dp[9][9],m,n;
    memset(dp,0,sizeof(dp));
    queue<pair<ll,ll>> q;
    q.push(mp(a1,b1));  
    while(!q.empty()){
        a1=q.front().fi;
        b1=q.front().se;
        q.pop();
        if(a1==a2 && b1==b2) return dp[a2][b2];
        forn(i,1,9){
            m=a1+x[i];  
            n=b1+y[i];
            if(m>8 || m<1 || n>8 || n<1) continue;
            q.push(mp(m,n));
            dp[m][n]=dp[a1][b1]+1;
        }
    }

}

void solution(){

    // This is the main code
    ll b1,b2;
    char a1,a2;
    cin>>a1>>b1>>a2>>b2;
    // cout<<a1-'a'+1<<b1<<a2-'a'+1<<b2;
    cout<<bfs(a1-'a'+1,b1,a2-'a'+1,b2)<<endl;

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