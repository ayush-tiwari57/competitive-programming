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
    int n;
	cin >> n;
	vector<ll> v(n), t;
    map<int,int> h,va;
	for (auto &it : v) cin >> it;
    if(n==1 || n==2){
        cout<<0<<endl;
        return;
    }
    forn(i,1,n-1){
        if(v[i]>v[i-1] && v[i]>v[i+1]) {
            t.pb(i);
            h[i]=1;
        }
        if(v[i]<v[i+1] && v[i]<v[i-1]) {
            t.pb(i);
            va[i]=1;
        }
    }
    if(t.size()==0 || t.size()==1){
        cout<<0<<endl;
        return;
    }
    int x=t.size(),ans=t.size();
    forn(i,1,n-1){
        int z=0;
        if(h[i]||va[i]) z++;
        
    }
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
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