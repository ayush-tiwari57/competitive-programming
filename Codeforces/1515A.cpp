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
    int n,x;
    cin>>n>>x;
    int s=0;
    vector<int> a(n);
    vector<pair<int,int>> v;
    forn(i,0,n){
        cin>>a[i];
        s+=a[i];
        v.pb({a[i],i});
    }
    sort(all(v));
    vector<int> ans;
    int y=0;
    forn(i,0,n){
        if(y+v[i].first==x){
            ans.pb(v[i+1].first);
            ans.pb(v[i].first);
            y+=v[i].first+v[i+1].first;
            i++;
        }
        else{
            ans.pb(v[i].first);
            y+=v[i].first;
        }
    }
    if(s==x) cout<<"NO"<<endl;
    else{ 
        cout<<"YES"<<endl;
        forn(i,0,n) cout<<ans[i]<<" ";
        cout<<endl;
    }
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