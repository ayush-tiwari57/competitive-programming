/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long
#define int long long
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

bool comp(pair<int,int> a, pair<int,int> b){
    return a.first-a.second>b.first-b.second;
}

void solution(){

    // This is the main code
    int n,u,v;
    cin>>n;
    vector<pair<int,int>> pi;
    forn(i,0,n){
        cin>>u>>v;
        pi.pb({u,v});
    }
    sort(all(pi),comp);
    int ans=0;
    forn(i,0,n){
        ans+=(pi[i].first*i+pi[i].second*(n-i-1));
    }
    cout<<ans;
}


signed main(){
    
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