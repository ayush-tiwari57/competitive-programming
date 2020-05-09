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
    ll j,i,n,z, ans=0;
    cin>>n;
    vector<int> a;
    for(i=0;i<n;i++){
        cin>>z;
        a.pb(z);
    }
    sort(a.begin(),a.end());
    i=0,j=0;
    while(i<n)
    if(a[j]*2>=a[i])ans=max(ans,i-j+1),i++;
    else j++;
    cout<<n-ans;
}


int main(){
    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    
    ll t=1;
    while (t--)
    {
        solution();
    }
    return 0;
}