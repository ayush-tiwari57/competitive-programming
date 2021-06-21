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
    int n;
    cin>>n;
    vector<int> a(n);
    forn(i,0,n) cin>>a[i];
    sort(all(a));
    vector<int> temp;
    int x=0,y=0,diff=INT_MAX;
    forn(i,1,n){
        if(a[i]-a[i-1]<diff){
            x=i-1;
            y=i;
            diff=a[i]-a[i-1];
        }
    }
    temp.pb(a[x]);
    forn(i,y+1,n){
        temp.pb(a[i]);
    }
    forn(i,0,x) temp.pb(a[i]);
    temp.pb(a[y]);
    forn(i,0,n) cout<<temp[i]<<" ";
    cout<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    int t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}