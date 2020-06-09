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

char a[10003][10003];
int vis[1003][1003][4][3]={0};
int flag=0,n,m;

void dfs(int i, int j, int d, int c){
    if(i<0 || i>=n || j<0 || j>=m || vis[i][j][d][c]==1 || c>2 || a[i][j]=='*') return;
    if(a[i][j]=='T'){
        flag=1;
        return;
    }
    vis[i][j][d][c]=1;
    dfs(i,j+1,1,c+1-(d==0 ||d==1));
    dfs(i,j-1,2,c+1-(d==0 ||d==2));
    dfs(i+1,j,3,c+1-(d==0 ||d==3));
    dfs(i-1,j,4,c+1-(d==0 ||d==4));
}

void solution(){

    // This is the main code

    int x,y;
    cin>>n>>m;
    forn(i,0,n){
        forn(j,0,m){
            cin>>a[i][j];
            if(a[i][j]=='S'){
                x=i;
                y=j;
            }
        } 
    }
    dfs(x,y,0,0);
    if (flag==1) cout<<"YES";
    else cout<<"NO";

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