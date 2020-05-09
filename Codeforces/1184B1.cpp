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
    ll N=1e9;
    int s,b;
    int x=0;
    cin>>s>>b;
    ll a[s];
    for(int i=0;i<s;i++)cin>>a[i];
    pair<ll,ll>p[b];
    for(int i=0;i<b;i++)cin>>p[i].first>>p[i].second;
    sort(p,p+b);
    for(int i=0;i<s;i++){
    ll l=0;
    x=lower_bound(p,p+b,make_pair(a[i],N))-p;
    for(int n=0;n<x;n++)
    l+=p[n].second;
    cout<<l<<" ";
    }

}


int main(){
    
    // #ifndef ONLINE_JUDGE
    // freopen("/Users/shri/Documents/input.txt","r",stdin);
    // freopen("/Users/shri/Documents/output.txt","w",stdout);
    // #endif
    
    
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}