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
    int n,k;
    cin>>n>>k;
    if(n==k) cout<<"1"<<endl;
    else if(n>k){
        int x=2,z=k;
        while(n>k){
            k=z*x;
            x++;
        }
        // cout<<n<<" "<<k<<endl;
        int y=k/n;
        if(k%n) y++;
        cout<<y<<endl;
    }
    else{
        int y=k/n;
        if(k%n) y++;
        cout<<y<<endl;
    }
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