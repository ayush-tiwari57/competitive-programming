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
int k;

int func(vector<pair<int,int>> v,vector<pair<int,int>> arr,int i,map<int,int> d){
    if(i>k){
        int cnt=0;
        for(auto [x,y]: v){
            if(d[x] && d[y]) cnt++;
        }
        return cnt;
    }
    int ans=0;
    d[arr[i].first]++;
    ans=max(ans,func(v,arr,i+1,d));
    d[arr[i].first]--;
    d[arr[i].second]++;
    ans=max(ans,func(v,arr,i+1,d));
    return ans;
}

void solution(){

    // This is the main code
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> v,arr;
    forn(i,0,m){
        int x,y;
        cin>>x>>y;
        v.pb({x,y});
    }
    cin>>k;
    forn(i,0,k){
        int x,y;
        cin>>x>>y;
        arr.pb({x,y});
    }
    map<int,int> d;
    cout<<func(v,arr,0,d)<<endl;;
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