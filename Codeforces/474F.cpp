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

struct node
{
    int mi=0;
    int cnt=0;
    int gcd=1;
};


int a[maxn];
node segtree[4*maxn];

void build(int ind,int ss,int se){
    if(ss==se){
        segtree[ind].mi=segtree[ind].gcd=a[ss];
        segtree[ind].cnt=1;
        return;
    }
    int mid=(se+ss)/2;
    build(2*ind,ss,mid);
    build(2*ind+1,mid+1,se);
    segtree[ind].mi=min(segtree[2*ind].mi,segtree[2*ind+1].mi);
    segtree[ind].gcd=__gcd(segtree[2*ind].gcd,segtree[2*ind+1].gcd);
    if(segtree[2*ind].mi==segtree[2*ind+1].mi){
        segtree[ind].cnt=segtree[2*ind].cnt+segtree[2*ind+1].cnt;
    }
    else if(segtree[2*ind].mi<segtree[2*ind+1].mi){
        segtree[ind].cnt=segtree[2*ind].cnt;
    }
    else segtree[ind].cnt=segtree[2*ind+1].cnt;
}

node query(int ind,int ss,int se,int qs,int qe){
    node ans;
    if(qs>se || qe<ss){
        ans.mi=0;
        ans.gcd=0;
        ans.cnt=0;
        return ans;
    }
    if(qs<=ss && qe>=se){
        if(segtree[ind].mi==segtree[ind].gcd){
            ans.mi=segtree[ind].mi;
            ans.cnt=segtree[ind].cnt;
            ans.gcd=segtree[ind].gcd;
        }
        else{
            ans.mi=segtree[ind].mi;
            ans.cnt=0;
            ans.gcd=segtree[ind].gcd;
        }
        return ans;
    }
    int mid=(se+ss)/2;
    node l=query(2*ind,ss,mid,qs,qe);
    node r=query(2*ind+1,mid+1,se,qs,qe);
    if(l.gcd && r.gcd){
        ans.gcd=__gcd(l.gcd,r.gcd);
        ans.mi=min(l.mi,r.mi);
        if(ans.mi==ans.gcd){
            if(l.mi==r.mi) ans.cnt=l.cnt+r.cnt;
            else if(l.mi<r.mi) ans.cnt=l.cnt;
            else ans.cnt=r.cnt;
        }
        else ans.cnt=0;
        return ans;
    }
    else if(l.gcd) return l;
    else return r;
}

void solution(){

    // This is the main code
    int n;
    cin>>n;
    forn(i,1,n+1) cin>>a[i];
    build(1,1,n);
    int q;
    cin>>q;
    forn(i,0,q){
        int l,r;
        cin>>l>>r;
        cout<<r-l+1-query(1,1,n,l,r).cnt<<endl;
    }
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    int t=1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}