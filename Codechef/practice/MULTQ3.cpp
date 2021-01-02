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

struct node{
    int ar[3];
};

int lazy[400004];
node seg[400004];

void build(int ind ,int start,int end){
    if(start==end){
        seg[ind].ar[0]=1;
        seg[ind].ar[1]=0;
        seg[ind].ar[2]=0;
        return;
    }
    int mid=(start+end)/2;
    build(2*ind,start,mid);
    build(2*ind+1,mid+1,end);
    seg[ind].ar[0]=seg[2*ind+1].ar[0]+seg[2*ind].ar[0];
    seg[ind].ar[1]=seg[2*ind+1].ar[1]+seg[2*ind].ar[1];
    seg[ind].ar[2]=seg[2*ind+1].ar[2]+seg[2*ind].ar[2];
}

void shift(int ind){
    int temp=seg[ind].ar[0];
    seg[ind].ar[0]=seg[ind].ar[2];
    seg[ind].ar[2]=seg[ind].ar[1];
    seg[ind].ar[1]=temp;
}

int query(int ind,int start,int end,int qs,int qe){
    if(lazy[ind]!=0){
        int add=lazy[ind];
        lazy[ind]=0;
        if(start!=end){
            lazy[2*ind]+=add;
            lazy[2*ind+1]+=add;
        }
        add%=3;
        forn(i,0,add) shift(ind); 
    }
    if(qe<start || qs>end) return 0;
    if(start>=qs && end<=qe) return seg[ind].ar[0];
    int mid=(start+end)/2;
    int l=query(2*ind,start,mid,qs,qe);
    int r=query(2*ind+1,mid+1,end,qs,qe);
    return l+r;
}

void update(int ind ,int start,int end,int qs,int qe){
    if(lazy[ind]!=0){
        int add=lazy[ind];
        lazy[ind]=0;
        if(start!=end){
            lazy[2*ind]+=add;
            lazy[2*ind+1]+=add;
        }
        add%=3;
        forn(i,0,add) shift(ind);
    }
    if(start>qe || end<qs) return;
    if(start>=qs && end<=qe){
        shift(ind);
        if(start!=end){
            lazy[2*ind]++;
            lazy[2*ind+1]++;
        }
        return;
    }
    int mid=(start+end)/2;
    update(2*ind,start,mid,qs,qe);
    update(2*ind+1,mid+1,end,qs,qe);
    seg[ind].ar[0]=seg[2*ind].ar[0]+seg[2*ind+1].ar[0];
    seg[ind].ar[1]=seg[2*ind].ar[1]+seg[2*ind+1].ar[1];
    seg[ind].ar[2]=seg[2*ind].ar[2]+seg[2*ind+1].ar[2];
}

void solution(){

    // This is the main code
    int n,q,ty,x,y;
    cin>>n>>q;
    build(1,1,n);
    forn(i,0,q){
        cin>>ty>>x>>y;
        x++;
        y++;
        if(ty==0) update(1,1,n,x,y);
        else cout<<query(1,1,n,x,y)<<endl;
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