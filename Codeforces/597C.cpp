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
#define maxn 100009
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

ll fen[maxn][11];

void update(int i,int j,ll upd,int n){
    while(i<n){
        fen[i][j]+=upd;
        i+=((i)&(-i));
    }
}

ll get(int i,int j){
    ll s=0;
    while(i>0){
        s+=fen[i][j];
        i-=((i)&(-i));
    }
    return s;
}

void solution(){

    // This is the main code
    int n,k,num;
    ll ans=0;
    cin>>n>>k;
    forn(i,0,n){
        cin>>num;
        update(num,1,1,n+1);
        forn(j,2,k+2){
            update(num,j,get(num-1,j-1),n+1);
        }
    }
    cout<<get(n,k+1);
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