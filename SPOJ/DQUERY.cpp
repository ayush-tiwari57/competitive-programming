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
#define bk 600
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int a[maxn];

struct query{
    int l;
    int r;
    int ind;
};

query Q[maxn]; 
int freq[1000006];

bool comp(query a, query b){
    if(a.l/bk!=b.l/bk) return a.l/bk<b.l/bk;
    return a.r<b.r;
}

void solution(){

    // This is the main code
    int n;
    cin>>n;
    forn(i,0,n) cin>>a[i];
    int q,l,r;
    cin>>q;
    forn(i,0,q){
        cin>>l>>r;
        Q[i].l=l-1;
        Q[i].r=r-1;
        Q[i].ind=i;
    }
    sort(Q,Q+q,comp);
    int cnt=0,start=0,end=-1,ans[q+1];
    forn(i,0,q){
        // cout<<start<<" "<<end<<endl;
        l=Q[i].l;
        r=Q[i].r;
        int ind=Q[i].ind;
        while(start>l){
            start--;
            freq[a[start]]++;
            if(freq[a[start]]==1) cnt++;
        }
        while(end<r){
            end++;
            freq[a[end]]++;
            if(freq[a[end]]==1) cnt++;
        }
        while(start<l){
            freq[a[start]]--;
            if(freq[a[start]]==0) cnt--;
            start++;
        }
        while(end>r){
            freq[a[end]]--;
            if(freq[a[end]]==0) cnt--;
            end--;
        }
        
        ans[ind]=cnt;
    }
    forn(i,0,q){
        cout<<ans[i]<<endl;
    }
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
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