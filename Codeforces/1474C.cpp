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
    int n,mx=0;
    cin>>n;
    n*=2;
    vector<int> a(n);
    forn(i,0,n){
        cin>>a[i];
        if(a[i]>a[mx]) mx=i;
    }
    forn(i,0,n){
        if(i==mx) continue;
        vector<pair<int,int>> ans;
        multiset<int> temp;
        int flag=0;
        int y=a[mx];
        ans.pb({y,a[i]});
        forn(j,0,n){
            if(j==i || j==mx) continue;
            temp.insert(a[j]);
        }
        while(temp.size()){
            int x=*temp.rbegin();
            temp.erase(temp.find(x));
            if(temp.find(y-x)==temp.end()){
                flag=1;
                break;
            }
            ans.pb({x,y-x});
            temp.erase(temp.find(y-x));
            y=x;
        }
        if(!flag){
            cout<<"YES"<<endl;
            cout<<a[i]+a[mx]<<endl;
            for(auto [q,w]: ans) cout<<q<<" "<<w<<endl;  
            return;      
        }
    }
    cout<<"NO"<<endl;
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