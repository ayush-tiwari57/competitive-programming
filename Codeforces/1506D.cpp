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
    int a[n];
    map<int,int> m;
    priority_queue<int> pq;
    forn(i,0,n){
        cin>>a[i];
        m[a[i]]++;
    }
    int ans=n;
    for(auto x: m){
        pq.push(x.second);
    }
    while(pq.size()>=2){
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        pq.pop();   
        x--;
        y--;
        ans-=2;
        if(x) pq.push(x);
        if(y) pq.push(y);
    }
    cout<<ans<<endl;
    
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