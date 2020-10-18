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


void solution(int test){

    // This is the main code
    int n;
    cin>>n;
    ll mat[n+1][n+1];
    forn(i,0,n){
        forn(j,0,n) cin>>mat[i][j];
    }
    ll ans=0;
    forn(i,0,n){
        forn(j,0,n){
            if(i==0 ||j==0){
                ans=max(ans,mat[i][j]);
                continue;
            }
            mat[i][j]+=mat[i-1][j-1];
            ans=max(ans,mat[i][j]);
        }
    }
    cout<<"Case #"<<test+1<<": "<<ans<<endl; 
    
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    cin>>t;
    forn(i,0,t) solution(i);
    return 0;
}