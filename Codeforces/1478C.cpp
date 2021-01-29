/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define int long long
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
    cin>>n;
    n*=2;
    vector<int> a;
    map<int,int> m,m2;
    forn(i,0,n){
        cin>>x;
        m[x]++;
        if(m[x]==1) a.pb(x);
    }
    for(auto z: m){
        if(z.second!=2){
            cout<<"NO"<<endl;
            return;
        }
    }
    sort(all(a));
    int y=a.size();
    if(a[y-1]%(y*2) || a[y-1]/(y*2)<0){
        cout<<"NO"<<endl;
        return;
    }
    int d=a[y-1]/(2*y);
    m2[d]=1;
    rforn(i,y-2,0){
        if(a[i]-2*d<=0 || (a[i]-2*d)%(2*(i+1)) || (a[i]-2*d)/(2*(i+1))<=0){
            cout<<"NO"<<endl;
            return;
        }
        d+=((a[i]-2*d)/(2*(i+1)));
        if(m2[(a[i]-2*d)/(2*(i+1))]){
            cout<<"NO"<<endl;
            return;
        }
        m2[(a[i]-2*d)/(2*(i+1))]=1;
    }
    cout<<"YES"<<endl;
}


signed main(){
    
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