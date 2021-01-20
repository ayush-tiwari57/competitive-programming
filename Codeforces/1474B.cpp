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


void solution() {
	int n;
	cin >> n;
	ll x=n+1;
    while(true){
        if(x==2) break;
        int flag=0;
        forn(i,2,sqrt(x)+1){
            if(x%i==0){
                flag=1;
                break;
            }
        }
        if(flag) x++;
        else break;
    }
    ll y=x+n;
    while(true){
        if(y==2) break;
        int flag=0;
        forn(i,2,sqrt(y)+1){
            if(y%i==0){
                flag=1;
                break;
            }
        }
        if(flag) y++;
        else break;
    }
    cout<<x*y<<endl;
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