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
    int n,a[maxn],x,y,pos,posx,posy,ma=-1,mi=1000;
    cin>>n;
    forn(i,0,n) cin>>a[i];
    vector<int> v[n];
    forn(i,0,n){
        x=a[i];
        pos=0;
        while (x>0){
            y=x%2;
            if(y) v[i].pb(pos);
            pos++;
            x/=2;
        }
        if(v[i][0]>ma){
            ma=v[i][0];
            posx=i;
        }
        if(v[i][0]<mi){
            mi=v[i][0];
            posy=i;
        }
        // for(auto x: v[i]) cout<<x<<" ";
        // cout<<endl;
    } 
    forn(i,0,n){
        if(v[i][0]==ma){
            
        }
        if(v[i][0]==mi){

        }
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