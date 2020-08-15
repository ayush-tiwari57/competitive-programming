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
#define maxn 204
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int vis[maxn];
int n,m,x,y;

void solution(){

    // This is the main code
    cin>>n>>m>>x>>y;
    cout<<x<<" "<<y<<endl;
    forn(j,1,m+1){
        if(j!=y) cout<<x<<" "<<j<<endl;
    }
    vis[x]=1;
    int flag=0;
    forn(i,1,n+1){
        if(!vis[i]){
            if(flag==0){
                flag=1;
                rforn(j,m,1) cout<<i<<" "<<j<<endl; 
            }
            else{
                flag=0;
                forn(j,1,m+1) cout<<i<<" "<<j<<endl;
            }
            vis[i]=1;
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