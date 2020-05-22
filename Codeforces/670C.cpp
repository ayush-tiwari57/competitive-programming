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

//loops
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)

// defined values
#define maxn 1000004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

ll a[maxn],b[maxn],c[maxn];
void solution(){

    // This is the main code
    int n,m,x=-1,ind=0;
    cin>>n;
    map <int,int> ma;
    forn(i,0,n) {
        cin>>a[i];
        ma[a[i]]+=1;
    }
    cin>>m;
    forn(i,0,m) cin>>b[i];
    forn(i,0,m) cin>>c[i];
    forn(i,0,m){
        if (ma[b[i]]>x) ind=i,x=ma[b[i]];
        if (ma[b[i]]==x) {
            if (ma[c[i]]>ma[c[ind]]) ind=i;
        }
    }
    cout<<ind+1;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}