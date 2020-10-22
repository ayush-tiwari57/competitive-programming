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
#define maxn 5004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;
int parent[maxn];

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}

void solution(){

    // This is the main code
    int n;
    cin>>n;
    vector<int> ar(n);
    forn(i,0,n) cin>>ar[i];
    memset(parent,0,sizeof(parent));
    forn(i,0,n) parent[i]=i;
    vector<pair<int,int>> ans;
    forn(i,0,n){
        forn(j,0,n){
            if(find_set(i)!=find_set(j) && ar[i]!=ar[j]){
                ans.pb(mp(i+1,j+1));
                union_sets(i,j);
            }
        }
    }
    if(ans.size()!=n-1) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        forn(i,0,n-1) cout<<ans[i].first<<" "<<ans[i].second<<endl;
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