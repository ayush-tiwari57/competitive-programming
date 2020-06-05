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


void solution(){

    // This is the main code
    int n,m,u,v;
    cin>>n>>m;
    vector<unordered_set<int>> graph(n+1);
    vector<int> minarr(n+1,1);
    vector<pair<int,int>> pa(n);
    forn(i,0,m){
        cin>>u>>v;
        graph[u].insert(v);
        graph[v].insert(u);
    }   
    forn(i,0,n){
        cin>>pa[i].first;
        pa[i].second=i+1;
    }
    sort(pa.begin(),pa.end());
    int flag=0;
    for(auto x: pa){
        int t=x.first;
        int i=x.second;
        if(minarr[i]!=t){
            flag=1;
            break;
        }
        int t1=t+1;
        for(auto z: graph[i]){
            if(minarr[z]<t){
                flag=1;
                break;
            }
            minarr[z]=t1;
            graph[z].erase(i);
        }
        if(flag==1){
            break;
        }
    }
    if(flag==1) cout<<"-1";
    else{
        for(auto x:pa)cout<<x.second<<" ";
    }

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