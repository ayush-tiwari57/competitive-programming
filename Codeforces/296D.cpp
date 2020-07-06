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
    ll arr[n+1][n+1];
    forn(i,0,n){
        forn(j,0,n) cin>>arr[i][j];
    }
    vector<ll> x(n,0),ans(n,0);
    forn(i,0,n){
        cin>>x[i];
        x[i]--;
    }
    rforn(k,n-1,0){
        forn(i,0,n){
            forn(j,0,n) arr[i][j]=min(arr[i][j],arr[i][x[k]]+arr[x[k]][j]);
        }
        forn(i,k,n){
            forn(j,k,n) ans[k]+=arr[x[i]][x[j]];
        }
    }
    for(auto x: ans) cout<<x<<" ";
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