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
#define maxn 300001
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

vector<int> seg,a;

void build(int start,int end,int ind){
    if(start==end){
        seg[ind]=a[start];
        return;
    }
    int mid=(start+end)/2;
    build(start,mid,2*ind);
    build(mid+1,end,2*ind+1);
    seg[ind]=seg[2*ind]^seg[2*ind+1];
}

int query(int start,int end,int ind,int qs,int qe){
    if(qs>end || qe<start) return 0;
    if(qs<=start && qe>=end) return seg[ind];
    int mid=(start+end)/2;
    int l=query(start,mid,2*ind,qs,qe);
    int r=query(mid+1,end,2*ind+1,qs,qe);
    return l^r;
}
void update(int start,int end,int ind,int qi,int upd){
    if(start==end){
        seg[ind]=upd;
        return;
    }
    int mid=(start+end)/2;
    if(qi<=mid) update(start,mid,2*ind,qi,upd);
    else update(mid+1,end,2*ind+1,qi,upd);
    seg[ind]=seg[2*ind]^seg[2*ind+1];
}
void solution(){

    // This is the main code
    int n,q;
    cin>>n>>q;
    a.assign(n+2,0);
    seg.assign(4*n+3,0);
    forn(i,1,n+1) cin>>a[i];
    // forn(i,1,n+1) cout<<a[i]<<" ";
    build(1,n,1);
    // forn(i,1,2*n+1) cout<<seg[i]<<" ";
    // cout<<endl;   
    forn(i,0,q){
        int ty,x,y;
        cin>>ty>>x>>y;
        if(ty==1){
            a[x]^=y;
            update(1,n,1,x,a[x]);
            // forn(i,1,2*n+1) cout<<seg[i]<<" ";
            // cout<<endl;   
        }
        else cout<<query(1,n,1,x,y)<<endl;
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