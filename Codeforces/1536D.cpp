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
    set<int> s;
    s.insert(INT_MAX);
    s.insert(INT_MIN);
    s.insert(a[0]);
    forn(i,1,n){
        auto pos=s.find(a[i-1]);
        if(a[i]==a[i-1]) continue;
        if(a[i]>a[i-1]){
            if(*(++pos)<a[i]){
                cout<<"NO"<<endl;
                return;
            }
        }
        else{
            if(*(--pos)>a[i]){
                cout<<"NO"<<endl;
                return;
            }
        }
        s.insert(a[i]);
    }
    cout<<"YES"<<endl;
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