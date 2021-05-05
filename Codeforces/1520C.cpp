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
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int a[n][n];
    int x=1,flag=0;
    for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j) {
			a[i][j] = x;
			x += 2;
			if (x > n * n) x = 2;
		}
    int f=0;
    forn(i,0,n){
        forn(j,0,n){
            if(i>0 && abs(a[i][j]-a[i-1][j])==1) {
                f=1;
                // cout<<i<<" "<<j<<endl;
            }
            if(i<n-1 && abs(a[i][j]-a[i+1][j])==1) f=1;
            if(j<n-1 && abs(a[i][j]-a[i][j+1])==1) f=1;
            if(j>0 && abs(a[i][j]-a[i][j-1])==1) f=1;
        }
    }
    if(f) cout<<-1<<endl;
    else{
        forn(i,0,n){
            forn(j,0,n) cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
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