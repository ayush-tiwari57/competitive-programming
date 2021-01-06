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

// bool comp(vector<int> v1,vector<int> v2){
//     if(v1[0]==v2[0]) return v1[1]>v2[1];
//     return v1[0]<v2[0];
// }

void solution(){

    // This is the main code
    int n,u,v;
    cin>>n;
    vector<vector<int>> a;
    forn(i,0,n){
        cin>>u>>v;
        a.pb({u,-v,i});
        a.pb({v,-u,i});
    }  
    sort(all(a));
    vector<int> ans(n,-1);
    int minh=INT_MAX,ele=-1;
    forn(i,0,2*n){
        int w=a[i][0];
        int h=-a[i][1];
        int ind=a[i][2];
        // cout<<w<<" "<<h<<" "<<ind<<endl;
        if(minh>h){
            minh=h;
            ele=ind;
        }
        else if(minh<h){
            ans[ind]=ele+1;
        }
    }
    forn(i,0,n) cout<<ans[i]<<" ";
    cout<<endl;
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