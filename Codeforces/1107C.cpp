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
    int n,k,x,y;
    string s;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>s;
    ll i=0,sum=0,j;
    while(i<n){
        j=i;
        while(s[j]==s[i] && j<n){
            j+=1;
        }
        sort(a+i,a+j,greater<int>());
        for(int x=i;x<min(j,i+k);x++)
            sum+=a[x];

        i=j;
    }
    cout<<sum<<endl;
}


int main(){
    
    // #ifndef ONLINE_JUDGE
    // freopen("/Users/shri/Documents/input.txt","r",stdin);
    // freopen("/Users/shri/Documents/output.txt","w",stdout);
    // #endif
    
    
    ll t=1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}