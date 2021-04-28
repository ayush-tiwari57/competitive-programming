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

ll segtree[4*maxn],a[maxn];

void build(int ind,int ss,int se){
    if(ss==se) {
        segtree[ind]=1;
        return;
    }
    int mid=(ss+se)/2;
    build(2*ind,ss,mid);
    build(2*ind+1,mid+1,se);
    segtree[ind]=segtree[2*ind+1]+segtree[2*ind];
}

// ll query(int ind,int ss,int se,){
        
// }

void update(int ind,int ss,int se,int qi,int ele){
    if(ss==se){
        segtree[ind]=0;
        return;
    } 
    int mid=(ss+se)/2;
    if(qi<=mid) update(2*ind,ss,mid,qi,ele);
    else update(2*ind+1,mid+1,se,qi,ele);
    segtree[ind]=segtree[2*ind]+segtree[2*ind+1];
}
void solution(){

    // This is the main code
    int n,l,r,t;
    cin>>n;
    forn(i,1,n+1) cin>>a[i];
    // memset(segtree,1,sizeof(segtree));
    build(1,1,n);
    forn(i,1,4*n) cout<<segtree[i]<<" ";
    // rforn(i,n,1){
    //     cout<<query(1,1,n,a[i],n)<<" ";
    //     update(1,1,n,a[i],1);   
    // }
    // build(1,1,n);
    // forn(i,1,n) cout<<segtree[i]<<" ";
    // forn(i,0,m){
    //     cin>>t>>l>>r;
    //     l++;
    //     if(t==1){
    //         update(1,1,n,l,r);
    //     }   
    //     else{
    //         cout<<query(1,1,n,l,r)<<endl;
    //     }             
    // }
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