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
#define S second
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

int ans(map<int,vector<int>> d,int n){
    int cnt=1e9;
      for(auto it: d){
        int temp=0;
        it.S.pb(n+1);
        sort(all(it.S));
        int l=it.S.size();
        for(int i=1; i<l; ++i)
            if(it.S[i]-1>it.S[i-1]) temp++;
        cnt=min(cnt, temp);
    }
    return cnt;
}

void solution(){

    // This is the main code
    int n;
    cin>>n;
    int a[n];
    forn(i,0,n){
        cin>>a[i];
    }
    map<int,vector<int>> d;
    forn(i,0,n){
        if(d[a[i]].size()==0) d[a[i]].pb(0);
        d[a[i]].pb(i+1);
    }
    
    cout<<ans(d,n)<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
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