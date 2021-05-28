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
    set<int> s;
    vector<int> v;
    v.pb(11);
    v.pb(111);
    v.pb(11111);
    v.pb(1111111);
    int x=n/11,y=n/111,a=n/11111,b=n/1111111;
    forn(i,0,x+1){
        forn(j,0,y+1){
            forn(k,0,a+1){
                forn(l,0,b+1){
                    int su=11*i+111*j+11111*k+1111111*l;
                    if(n%su==0){
                        cout<<"YES"<<endl;
                        return;
                    }
                }
            }
        }
    }
   
    cout<<"NO"<<endl;
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