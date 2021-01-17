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


void solution(){

    // This is the main code
    int n,m;
    cin>>n>>m;
    int a[n][m];
    char ch;
    forn(i,0,n){
        forn(j,0,m){
            cin>>ch;
            a[i][j]=ch-'0';
            // cout<<a[i][j]<<" ";
        }
        // cout<<endl;
    }
    forn(i,1,m){
        forn(j,0,n){
            if(a[j][i]) a[j][i]+=a[j][i-1];
        }
    }
    int ans=0;
    forn(i,0,m){
        map<int,int> cnt;
        int num=0;
        forn(j,0,n){
            if(a[j][i]) cnt[a[j][i]]++;
        }
        for(auto x=cnt.rbegin();x!=cnt.rend();x++){
            num+=x->second;
            ans=max(ans,x->first*num);
        }
    }
    cout<<ans;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
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