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
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    vector<string> v;
    string s;
    forn(i,0,n){
        cin>>s;
        v.pb(s);
    }
    x--;
    y--;
    int ans=0;
    forn(i,y+1,m){
        if(v[x][i]=='#') break;
        ans++;
    }
    // cout<<ans<<endl;
    rforn(i,y-1,0){
        if(v[x][i]=='#') break;
        ans++; 
    }
    // cout<<ans<<endl;
    rforn(i,x-1,0){
        if(v[i][y]=='#') break;
        ans++;
    }
    // cout<<ans<<endl;
    forn(i,x+1,n){
        if(v[i][y]=='#') break;
        ans++;
    }
    // cout<<ans<<endl;
    if(v[x][y]=='.') ans++;
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