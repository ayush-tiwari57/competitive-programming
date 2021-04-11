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
    int n;
    cin>>n;
    vector<int> v;
    if(n==0){
        cout<<"Yes";
        return;
    } 
    while(n>0){
        v.pb(n%10);
        n/=10;
    }
    int i=0;
    while(v[i]==0) i++;
    forn(j,0,i) v.pb(0);
    vector<int> temp=v;
    reverse(all(temp));
    // forn(i,0,v.size()) cout<<v[i]<<" ";
    // cout<<endl;
    if(temp==v) cout<<"Yes";
    else cout<<"No";
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}