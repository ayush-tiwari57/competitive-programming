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

int parent[27];

int find(int x){
    if(x==-1) return -1;
    if(parent[x]==x) return x;
    return parent[x]=find(parent[x]);
}

void solution(){

    // This is the main code
    int n,cnt[27]={};
    string a,b;
    cin>>n>>a>>b;
    memset(parent,-1,sizeof(parent));
    forn(i,0,n){
        if(a[i]>b[i]){
            cout<<"-1"<<endl;
            return;
        }
        if(a[i]==b[i]) continue;
        if(parent[a[i]-'a']==-1) parent[a[i]-'a']=a[i]-'a';
        if(parent[b[i]-'a']==-1) parent[b[i]-'a']=b[i]-'a';
        parent[find(a[i]-'a')]=find(b[i]-'a');
    }
    vector<int> v(26, 0);
    forn(i, 0, 26) { int t = find(i); if (t >= 0) v[t]++;}
    int sum=0;
    for(auto it: v) if(it) sum+=it-1;
    cout<<sum<<endl;
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