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
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int cnt = 0;
    forn(i,0,n){
        forn(j,0,m){
            char ch;
            cin>>ch;
            a[i][j]=ch-'0';
            if(a[i][j]) cnt++;
        }
    }
    vector<vector<int>> ans;
    forn(i,0,n){
        forn(j,0,m){
             if (a[i][j]) {
                if(i<n-1 && j<m-1){
                    ans.pb({i+1,j+1,i+2,j+2,i+1,j+2});
                    ans.pb({i+1,j+1,i+2,j+1,i+2,j+2});
                    ans.pb({i+1,j+1,i+2,j+1,i+1,j+2});
                    
                }
                else if(i<n-1) {
                    ans.pb({i+1,j+1,i+1,j,i+2,j});   
                    ans.pb({i+1,j+1,i+2,j+1,i+2,j});   
                    ans.pb({i+1,j+1,i+1,j,i+2,j+1});  
                }
                else if(j<m-1){
                    ans.pb({i+1,j+1,i+1,j+2,i,j+2});
                    ans.pb({i+1,j+1,i,j+1,i,j+2});
                    ans.pb({i+1,j+1,i+1,j+2,i,j+1});            
                }
                else{
                    ans.pb({i+1,j+1,i,j+1,i,j});   
                    ans.pb({i+1,j+1,i+1,j,i,j});   
                    ans.pb({i+1,j+1,i+1,j,i,j+1});   
                }
            }
        }
    }
    cout<<ans.size()<<endl;
    forn(i,0,ans.size()){
        for(auto x: ans[i]) cout<<x<<" ";
        cout<<endl;
    }
}

int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
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