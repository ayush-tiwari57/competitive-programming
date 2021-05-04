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

vector<pair<double,double>> a;

bool check(double t){
    // x[i]-tv .... x[i]+tv
    int n=a.size();
    double l=-1e9,r=1e9;
    forn(i,0,n){
        double x=a[i].first;
        double v=a[i].second;
        double lcur=x-t*v,rcur=x+t*v;
        if(l>rcur|| r<lcur) return 0;
        l=max(lcur,l);
        r=min(rcur,r);
    }
    return 1;
}

void solution(){

    // This is the main code
    double ans=0;
    int n;
    double x,v;
    cin>>n;
    forn(i,0,n){
        cin>>x>>v;
        a.pb({x,v});
    }
    double beg=0,end=3e9;
    forn(i,0,100){
        double mid=(beg+end)/2;
        if(check(mid)) end=mid;
        else beg=mid;
    }
    cout<<setprecision(7)<<beg;
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