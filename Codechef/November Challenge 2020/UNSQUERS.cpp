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
    int n,q,s,v,u;
    cin>>n>>q>>s;
    int mat[n+1][n+1]={0};
    int h[n+1];
    forn(i,1,n+1) cin>>h[i];
    forn(i,1,n+1){
        int cnt=0;
        int prev=0;
        forn(j,i,n+1){
            if(h[j]>prev){
                prev=h[j];
                cnt++;
            }
            mat[i][j]=cnt;
        }
    }
    rforn(i,n-1,0){
        forn(j,1,n+1){
            mat[i][j]=max(mat[i][j],mat[i+1][j]);
        }
    }
    // forn(i,1,n+1){
    //     forn(j,1,n+1) cout<<mat[i][j]<<" ";
    //     cout<<endl;
    // }
    int last=0;
    forn(i,0,q){
        cin>>u>>v;
        int l=min((u+s*last-1)%n+1,(v+s*last-1)%n+1);
        int r=max((u+s*last-1)%n+1,(v+s*last-1)%n+1);
        cout<<mat[l][r]<<"\n";
        last=mat[l][r];
    }
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
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