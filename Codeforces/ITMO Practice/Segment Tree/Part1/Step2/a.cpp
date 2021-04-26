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
#define maxn 100004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

ll segtree[4*maxn],a[maxn],pre[4*maxn],suf[4*maxn],sum[4*maxn];

void build(int ind,int ss,int se){
    if(ss==se) {
        segtree[ind]=suf[ind]=pre[ind]=sum[ind]=a[ss];
        return;
    }
    int mid=(ss+se)/2;
    build(2*ind,ss,mid);
    build(2*ind+1,mid+1,se);
    sum[ind]=sum[2*ind]+sum[2*ind+1];
    pre[ind]=max(pre[2*ind],sum[2*ind]+pre[2*ind+1]);
    suf[ind]=max(suf[2*ind+1],suf[2*ind]+sum[2*ind+1]);
    segtree[ind]=max(suf[2*ind]+pre[2*ind+1],max(segtree[2*ind],segtree[2*ind+1]));
}

ll query(int ind,int ss,int se,int qs,int qe){
    if(qs>se || qe<ss) return 0;
    if(qs<=ss && qe>=se) return segtree[ind];
    int mid=(ss+se)/2;
    ll l=query(2*ind,ss,mid,qs,qe);
    ll r=query(2*ind+1,mid+1,se,qs,qe);
    return l+r;
}

void update(int ind,int ss,int se,int qi,int ele){
    if(ss==se){
        segtree[ind]=suf[ind]=pre[ind]=sum[ind]=ele;
        return;
    } 
    int mid=(ss+se)/2;
    if(qi<=mid) update(2*ind,ss,mid,qi,ele);
    else update(2*ind+1,mid+1,se,qi,ele);
    sum[ind]=sum[2*ind]+sum[2*ind+1];
    pre[ind]=max(pre[2*ind],sum[2*ind]+pre[2*ind+1]);
    suf[ind]=max(suf[2*ind+1],suf[2*ind]+sum[2*ind+1]);
    segtree[ind]=max(suf[2*ind]+pre[2*ind+1],max(segtree[2*ind],segtree[2*ind+1]));
}
void solution(){

    // This is the main code
    int n,m,l,r,t;
    cin>>n>>m;
    forn(i,1,n+1) cin>>a[i];
    build(1,1,n);
    // forn(i,1,n) cout<<segtree[i]<<" ";
    cout<<max(segtree[1],(ll)0)<<endl;
    forn(i,0,m){
        cin>>l>>r;
        l++;       
        update(1,1,n,l,r);
        cout<<max(segtree[1],(ll)0)<<endl;
    }
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
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