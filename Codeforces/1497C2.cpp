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
    int n,k;
    cin>>n>>k;
    if(n%2==k%2){
        forn(i,1,k-1) cout<<1<<" ";
        cout<<(n-(k-2))/2<<" "<<(n-(k-2))/2<<endl;
    }
    else{
        forn(i,1,k-2) cout<<1<<" ";
        int x=n-(k-3);
        if((x/2)%2!=0)
        cout<<2<<" "<<(x-2)/2<<" "<<(x-2)/2<<endl; 
        else
        cout<<x/2<<" "<<(x-(x/2))/2<<" "<<(x-(x/2))/2<<endl;
    }
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