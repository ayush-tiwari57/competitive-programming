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

ll a[maxn];
vector<pair<ll,ll>> segtree(4*maxn);

void build(int ind,int ss,int se){
    if(ss==se) {
        segtree[ind]={a[ss],1};
        return;
    }
    int mid=(ss+se)/2;
    build(2*ind,ss,mid);
    build(2*ind+1,mid+1,se);
    segtree[ind].first=min(segtree[2*ind+1].first,segtree[2*ind].first);
    if(segtree[2*ind+1].first==segtree[2*ind].first) segtree[ind].second=segtree[2*ind].second+segtree[2*ind+1].second;
    else{
        if(segtree[2*ind+1].first>segtree[2*ind].first) segtree[ind].second=segtree[2*ind].second;
        else segtree[ind].second=segtree[2*ind+1].second;
    }
}

pair<ll,ll> query(int ind,int ss,int se,int qs,int qe){
    if(qs>se || qe<ss) return {INT_MAX,1};
    if(qs<=ss && qe>=se) return segtree[ind];
    int mid=(ss+se)/2;
    pair<ll,ll> l=query(2*ind,ss,mid,qs,qe);
    pair<ll,ll> r=query(2*ind+1,mid+1,se,qs,qe);
    if(l.first<r.first) return l;
    else if(l.first>r.first) return r;
    else return {l.first,l.second+r.second};
}

void update(int ind,int ss,int se,int qi,int ele){
    if(ss==se){
        segtree[ind]={ele,1};
        return;
    } 
    int mid=(ss+se)/2;
    if(qi<=mid) update(2*ind,ss,mid,qi,ele);
    else update(2*ind+1,mid+1,se,qi,ele);
    segtree[ind].first=min(segtree[2*ind+1].first,segtree[2*ind].first);
    if(segtree[2*ind+1].first==segtree[2*ind].first) segtree[ind].second=segtree[2*ind].second+segtree[2*ind+1].second;
    else{
        if(segtree[2*ind+1].first>segtree[2*ind].first) segtree[ind].second=segtree[2*ind].second;
        else segtree[ind].second=segtree[2*ind+1].second;
    }}
void solution(){

    // This is the main code
    int n,m,l,r,t;
    cin>>n>>m;
    forn(i,1,n+1) cin>>a[i];
    build(1,1,n);
    // forn(i,1,n) cout<<segtree[i]<<" ";
    forn(i,0,m){
        cin>>t>>l>>r;
        l++;
        if(t==1){
            update(1,1,n,l,r);
        }   
        else{
            pair <ll,ll> x=query(1,1,n,l,r);
            cout<<x.first<<" "<<x.second<<endl;
        }             
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