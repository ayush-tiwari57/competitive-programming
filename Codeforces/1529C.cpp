#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int mod=1000000007;
list<int>gr[100001];
vector<pair<int,int>>v;
    
int dp[100001][2];
void dfs(int u, int par){
    //for each neighbor of u
    for(auto x:gr[u]){
        if(x!=par){
        
        dfs(x,u);
        //here
        dp[u][0]+=max(abs(v[u-1].first-v[x-1].first)+dp[x][0],abs(v[u-1].first-v[x-1].second)+dp[x][1]);
        dp[u][1]+=max(abs(v[u-1].second-v[x-1].first)+dp[x][0],abs(v[u-1].second-v[x-1].second)+dp[x][1]);
        }
    }
}
void solve(){
    int n;
    cin>>n;
    v.clear();
    for(int i=1;i<=n;i++){
        gr[i].clear();
        dp[i][0]=dp[i][1]=0;
    }
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    dfs(1,0);
    cout<<max(dp[1][0],dp[1][1]);
    cout<<endl;
}
int32_t main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        // srand(time(0));
        int t;
        cin>>t;
        // t=1;
        while(t--){
        // cout<<"Case #"<<tt<<": ";
            solve();
            // tt++;
        }
        return 0;
}