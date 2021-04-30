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
    int n;
    cin>>n;
    vector<ll> front(n+1,0),a(n),b(n);
    forn(i,0,n) cin>>a[i];
    forn(i,0,n) cin>>b[i];
    forn(i,1,n+1) front[i]=front[i-1]+(a[i-1]*b[i-1]);
    ll rev[n+1][n+1];
    forn(i,0,n+1){
        forn(j,0,n+1){
            if(i==j && i!=0) rev[i][j]=a[i-1]*b[j-1];
            else rev[i][j]=0;
        }
    }
    forn(i,2,n){
        int x=i-1,y=i+1;
        while(x>0 && y<=n){
            rev[x][y]=rev[x+1][y-1]+a[x-1]*b[y-1]+b[x-1]*a[y-1];
            x--;
            y++;
        }
    }
    forn(i,1,n+1){
        int j=i+1,x=i+1,y=j+1;
        rev[i][j]=a[i-1]*b[j-1]+b[i-1]*a[j-1];
        while(x>0 && y<=n){
            rev[x][y]=rev[x+1][y-1]+a[x-1]*b[y-1]+b[x-1]*a[y-1];
            x--;
            y++;
        }
    }
    ll ans=0;
    forn(i,1,n+1){
        forn(j,i,n+1){
            ll x=rev[i][j]+(front[n]-front[j]+front[i-1]);
            ans=max(ans,x);
        }   
    }
    cout<<ans<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
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