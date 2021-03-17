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
    int n,x;
    cin>>n;
    vector<int> arr;
    map<int,int> m;
    forn(i,0,n){
        cin>>x;
        m[x]++;
        arr.pb(x);
    }
    int ans[n],j=0;
    for(auto z: m){
        m[z.first]--;
        ans[j]=z.first;
        j++;
    }
    for(auto z:m){
        int y=z.second;
        while(y){
            ans[j]=z.first;
            y--;
            j++;
        }
    }
    forn(i,0,n) cout<<ans[i]<<" ";
    cout<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
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