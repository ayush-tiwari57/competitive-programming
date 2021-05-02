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


void solution(){

    // This is the main code
    int n,m,x;
    cin>>n>>m>>x;
    int a[n];
    vector<pair<int,int>> v;
    vector<int> ans(n);
    forn(i,0,n){
        cin>>a[i];
        v.pb({a[i],i});
    }
    sort(all(v));
    priority_queue<pair<int,int>> pq;
    forn(i,0,n){
        if(i<m){
            pq.push({-v[i].first,i+1});
            ans[v[i].second]=i+1;
        }
        else {
            auto z=pq.top();
            pq.pop();
            int h=abs(z.first);
            int ind=z.second;
            h+=v[i].first;
            ans[v[i].second]=ind;
            pq.push({-h,ind});
        }
    }
    int mi=0;
    while(!pq.empty()){
        auto z=pq.top();
        pq.pop();
        if(mi==0) mi=abs(z.first);
        else{
            if(abs(z.first)-mi>x){
                cout<<"NO"<<endl;
                return;
            }
            mi=min(mi,abs(z.first));
        }
    }
    cout<<"YES"<<endl;
    forn(i,0,n) cout<<ans[i]<<" ";
    cout<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    int t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}