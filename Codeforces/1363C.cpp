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
void solution(){
    ll deg[maxn]={};

    // This is the main code
    ll n,x,u,v;
    cin>>n>>x;
    forn(i,1,n){
        cin>>u>>v;
        deg[u]++;
        deg[v]++;
    }
            if(deg[x]<=1 || n%2==0) cout<<"Ayush"<<endl; 
            else cout<<"Ashish"<<endl;

}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}