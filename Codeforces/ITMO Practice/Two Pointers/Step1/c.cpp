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
    int a[n],b[m];
    forn(i,0,n) cin>>a[i];
    forn(i,0,m) cin>>b[i];
    ll ans=0,i=0,j=0;
    while(i<n && j<m){
        while(i<n && b[j]>a[i]) i++;
        int y=j;
        while(j<m-1 && b[j]==b[j+1]) j++;
        if(i<n){
            int x=i;
            while(i<n && b[j]==a[i]) i++;
            ans+=(i-x)*(j-y+1);
            // cout<<b[j]<<" "<<i-x<<endl;
            // i++;
            j++;
        }
    }
    cout<<ans;
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