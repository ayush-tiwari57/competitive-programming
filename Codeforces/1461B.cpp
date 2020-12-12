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
int dp[501][501];

ll func(int n,int m){
    ll cnt=0;
    forn(i,0,n){
        forn(j,0,m){
            int k=0;
            while(j-k>=0 && i+k<n){
                int v=dp[i + k][j - k];
                if(v<2 * k + 1) break;
                cnt++;
                k++;
            }
        }
    }
    return cnt;
}

void solution(){

    // This is the main code
    int n,m,z=0;
    cin>>n>>m;
    vector<string> mat;
    string s;
    forn(i,0,n){
        cin>>s;
        mat.pb(s);
    }
    
    forn(i,0,n){
        z=0;
        rforn(j,m-1,0){
            if(mat[i][j]=='.') z=0;
            else z++;
            dp[i][j]=z;
        }
    }
    cout<<func(n,m)<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    int t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}