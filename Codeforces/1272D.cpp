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
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int a[1000003],pre[1000003],suff[1000003];
void solution(){

    // This is the main code
    int n,ans=0,x;
    int i;
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++){
        if(a[i]>a[i-1]) pre[i]+=pre[i-1]+1;
        else pre[i]=1;
        // cout<<pre[i]<<endl;
        ans=max(ans,pre[i]);
    }
    // cout<<ans<<endl;
    for(i=n;i>=1;i--){
        if(a[i]<a[i+1]) suff[i]+=suff[i+1]+1;
        else suff[i]=1;
    }
    for(i=1;i<=n;i++){
        if (a[i-1]<a[i+1]) x=pre[i-1]+suff[i+1];
        else x=1;
        ans=max(ans,x);
    }
    cout<<ans;

}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif
    
    FIO()   
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}