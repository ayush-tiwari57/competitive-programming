/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long int

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
#define bk 500
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

struct query{
    int l;
    int r;
    int ind;
};

bool comp(query a,query b){
    if(a.l/bk!=b.l/bk) return a.l/bk<b.l/bk;
    return a.r<b.r;
}

query Q[maxn];

int a[maxn],fre[1000002];

void solution(){

    // This is the main code
    int n,q,l,r;
    cin>>n>>q;
    forn(i,0,n) cin>>a[i];
    forn(i,0,q){
       cin>>l>>r;
       Q[i].l=l-1; 
       Q[i].r=r-1; 
       Q[i].ind=i; 
    }
    sort(Q,Q+q,comp);
    vector<ll> ans(q);
    int start=0,end=-1;
    ll power=0;
    forn(i,0,q){
        l=Q[i].l;
        r=Q[i].r;
        int ind =Q[i].ind;

        // expand
        while(start>l){
            start--;
            ll cnt=fre[a[start]];
            power-=(cnt*cnt*a[start]);
            fre[a[start]]++;
            cnt++;
            power+=cnt*cnt*a[start];
        }
        while(end<r){
            end++;
            ll cnt=fre[a[end]];
            power-=cnt*cnt*a[end];
            fre[a[end]]++;
            cnt++;
            power+=cnt*cnt*a[end];
        }

        // contract
        while (start<l)
        {
            ll cnt=fre[a[start]];
            power-=cnt*cnt*a[start];
            fre[a[start]]--;
            cnt--;
            power+=cnt*cnt*a[start];
            start++;
        }
        while(end>r){
            ll cnt=fre[a[end]];
            power-=cnt*cnt*a[end];
            fre[a[end]]--;
            cnt--;
            power+=cnt*cnt*a[end];
            end--;
        }
        ans[ind]=power;
    } 
    for(auto x: ans) cout<<x<<"\n";
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
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