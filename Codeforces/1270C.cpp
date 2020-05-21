/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long
#define Mod 1000000007
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;


void solution(){

    // This is the main code
    int n;
    ll x=0,s=0;
    cin>>n;
    int a[n];
    forn(i,0,n){ 
        cin>>a[i];
        s+=a[i];
        x^=a[i];
        }
    cout<<"2\n";
    cout<<x<<" "<<x+s<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}