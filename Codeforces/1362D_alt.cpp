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
#define maxn 500004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

vector<int> graph[maxn];
int a[maxn];
int color_arr[maxn];
int check[maxn];

void solution(){

    // This is the main code
    int n,m,u,v;
    cin>>n>>m;
    vector<pair<int,int>> p(n);
    forn(i,0,m){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    forn(i,0,n){
        cin>>p[i].first;
        // cout<<p[i].first;
        p[i].second=i+1;
        color_arr[i+1]=p[i].first;
    }
    sort(p.begin(),p.end());
    int flag=0;
    for(auto t: p){
        int cnt=0;
        int color=t.first;
        int node=t.second;
        for(auto x: graph[node]){
            if(color==color_arr[x]){
                flag=1;
                break;
            }
            if(color_arr[x]<color){
                if(check[color_arr[x]]==0){
                    cnt++;
                    check[color_arr[x]]=1;
                }
            }
        }
        if(cnt!=color_arr[node]-1) flag=1;
        if(flag==1) break;
        for(auto x: graph[node]){
            check[color_arr[x]]=0;
        }
    }
    if(flag==1) cout<<"-1";
    else{
        forn(i,0,n){
            cout<<p[i].second<<" ";
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