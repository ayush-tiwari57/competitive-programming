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

vector<int> graph[maxn], vis(maxn);
int ans = 0;

bool dfs(int node){
	vis[node]=1;
	for(auto child: graph[node]){
		if(vis[child]==0){
			if(dfs(child)) return true;
		}
		else if(vis[child]==1) return true;
	}
	vis[node]=2;
	return false;
}

void solution(){

    // This is the main code
	int n, m, u,v,ans=0;
	cin>>n>>m;
	forn(i,0,n+1){
		graph[i].clear();
		vis[i]=0;
	}
	forn(i,0,m){
		cin>>u>>v;
		if(u!=v){
		graph[u].pb(v);
		ans++;
		}
	}
	forn(i,1,n+1){
		if(!vis[i]){
			if(dfs(i)) ans++;
		}
	}
	cout<<ans<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
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