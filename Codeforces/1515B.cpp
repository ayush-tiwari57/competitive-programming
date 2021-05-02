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

map<int,int> m;

void solution(){

    // This is the main code
    int n;
    // cout<<m[2];
    cin>>n;
    int x=n/2;
    int y=n/4;
    double p=sqrt(x);
    double q=sqrt(y);
    // cout<<p<<" "<<q<<endl;
    if((n%2==0 && (int) p-sqrt(x)==0) || (n%4==0 && (int) q-sqrt(y)==0)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    // int j=1;
    int t=1;
    cin>>t;
    
    // cout<<m[4];
    while (t--)
    {
        solution();
    }
    return 0;
}