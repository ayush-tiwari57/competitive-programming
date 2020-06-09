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

vector<string> s;
int flag,n,m,fun_cnt;

void block(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m) return;
    else if(s[i][j]=='G'){
        flag=1;
        return;
    }
    else if(s[i][j]!='B') s[i][j]='#';
}

void dfs(int i,int j){
    if(i<0 || i>=n || j<0 || j>=m || s[i][j]=='#') return;
    if (s[i][j]=='G') fun_cnt++;
    s[i][j]='#';
    dfs(i+1,j);
    dfs(i-1,j);
    dfs(i,j-1);
    dfs(i,j+1);
}

void solution(){

    // This is the main code
    // int n,m;
    cin>>n>>m;
    s.resize(n);
    flag=0;
    fun_cnt=0;
    forn(i,0,n) cin>>s[i];
    int cnt=0;
    forn(i,0,n){
        forn(j,0,m){
            if(s[i][j]=='B'){
                block(i-1,j);
                block(i+1,j);
                block(i,j+1);
                block(i,j-1);
            }
            else if(s[i][j]=='G') cnt++;
        }
    }
    // forn(i,0,n){
    //     forn(j,0,m) cout<<s[i][j];
    //     cout<<endl;
    // }
    if(flag==1) cout<<"NO"<<endl;
    else{
        dfs(n-1,m-1);
        if(cnt==fun_cnt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}