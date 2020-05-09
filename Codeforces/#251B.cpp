/* code of Ayush Tiwari
    codechef- ayush572000
    codeforces- servermonk
*/

#include <bits/stdc++.h>
#define ll long long
#define Mod 1000000007
#define pb push_back
#define lb lower_bound
#define ub upper_bound


using namespace std;


void solution(){

    // This is the main code
    int n,x,ans=0,z;
    cin>>n>>x;
    vector<int> a; 
    for(int i=0;i<n;i++)
        cin>>z;
        a.pb(z);
    sort(a.begin(), a.end());
    for(int i=0;i<n;i++){
        ans+=a[i]*x;
        if (x!=1)
            x--;
    cout<<ans;
    }

}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/Users/shri/Documents/input.txt","r",stdin);
    freopen("/Users/shri/Documents/output.txt","w",stdout);
    #endif
    
    
    ll t=1;
    while (t--)
    {
        solution();
    }
    
}