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


void solution(){

    // This is the main code
    int n,m,e1,e2;
    char ch;
    cin>>n>>m;
    int a[51][51];
    int size=n*m+1;
    vector<int> adj[size];
    forn(i,0,n){
        forn(j,0,m){
            cin>>ch;
            a[i][j]=ch-'A';
        }
    }
    forn(i,0,n){
        forn(j,0,m){
            if(i!=n-1 && a[i][j]==a[i+1][j]){
                e1=m*(i)+j;
                e2=m*(i+1)+j;
                adj[e2].pb(e1);
                adj[e1].pb(e2);
            }
            if(j!=m-1 && a[i][j]==a[i][j+1]){
                e1=m*i+j;
                e2=m*i+j+1;
                adj[e1].pb(e2);
                adj[e2].pb(e1);
            }
        }
    }
    

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