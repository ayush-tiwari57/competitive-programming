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
    string a[]={"","","2","3","322","5","53","7","7222","7332"};
    int n;
    cin>>n;
    string s,t="";
    cin>>s;
    for(int i=0;i<n;i++)t+=a[s[i]-'0'];
    sort(t.rbegin(),t.rend());
    cout<<t;

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