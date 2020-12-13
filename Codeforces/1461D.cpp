/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long
#define int long long
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
#define maxn 100004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int n,q,a[maxn],pre[maxn];
// set<int> s;
map<int,int> m;
void func(int beg,int end){
    if(beg>end) return;
    // s.insert(pre[end]-pre[beg-1]);
    m[pre[end]-pre[beg-1]]=1;
    if(a[beg]==a[end]){
        return;
    }
    int sum=a[beg]+a[end]>>1;
    int ind=upper_bound(a+beg,a+end+1,sum)-a;
    // cout<<ind<<" "<<s1<<" "<<s2<<endl;   
    func(beg,ind-1);
    func(ind,end);
}

void solution(){

    // This is the main code
    cin>>n>>q;
    forn(i,1,n+1) cin>>a[i];
    sort(a+1,a+n+1);    
    forn(i,1,n+1) pre[i]=a[i]+pre[i-1];
    // for(auto x:pre) cout<<x<<" ";
    // cout<<endl;
    m.clear();
    func(1,n);
    // for(auto x:m) cout<<x.first<<endl;
    forn(i,0,q){
        int x;
        cin>>x;
        if(m[x]) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}


signed main(){
    
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