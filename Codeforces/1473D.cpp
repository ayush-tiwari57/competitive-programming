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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int a[n+2]={0}, premi[n+2]={0},prema[n+2]={0},suffmi[n+2]={0},suffma[n+2]={0},x=0;
    forn(i,1,n+1){
        if(s[i-1]=='-') x--;
        else x++;
        a[i]=x;
        premi[i]=min(premi[i-1],a[i]);
        prema[i]=max(prema[i-1],a[i]);
    }
    suffmi[n]=a[n];
    suffma[n]=a[n];
    rforn(i,n-1,0){
        suffmi[i]=min(suffmi[i+1],a[i]);
        suffma[i]=max(suffma[i+1],a[i]);
    }
    forn(i,0,m){
        int u,v;
        cin>>u>>v;
        int lmax=prema[u-1],lmin=premi[u-1],rmax=suffma[v+1],rmin=suffmi[v+1];
        if(v!=n){
            rmax-=(a[v]-a[u-1]);
            rmin-=(a[v]-a[u-1]);
        }
        // cout<<lmin<<" "<<lmax<<" "<<rmin<<" "<<rmax<<endl;
        if(lmax<rmin || rmax<lmin){
            cout<<lmax-lmin+1+rmax-rmin+1<<endl;
        }
        else cout<<max(rmax,lmax)-min(lmin,rmin)+1<<endl;
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