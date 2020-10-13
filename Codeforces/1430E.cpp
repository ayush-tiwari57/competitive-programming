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

int fenwick[maxn];

void update(int ind,int upd,int n){
    while(ind<n){
        fenwick[ind]+=upd;
        ind+=(ind&(-ind));
    }
}
ll sum(int ind){
    ll s=0;
    while(ind>0){
        s+=fenwick[ind];
        ind-=(ind&(-ind));
    }
    return s;
}


void solution(){

    // This is the main code
    int n;
    cin>>n;
    string s,rev;
    cin>>s;
    rev=s;
    reverse(all(rev));
    vector<int> pos[26];
    rforn(i,n-1,0) pos[s[i]-'a'].pb(i);
    vector<int> ord(n,0);
    forn(i,0,n){
        int ind=pos[rev[i]-'a'].back();
        pos[rev[i]-'a'].pop_back();
        ord[ind]=i+1;
    }
    ll ans=0;
    forn(i,0,n){
        ans+=(sum(n)-sum(ord[i]));
        update(ord[i],1,n+1);
    }
    cout<<ans;
    
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