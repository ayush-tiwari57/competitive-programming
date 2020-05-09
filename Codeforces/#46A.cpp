./* code of Ayush Tiwari
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
    int n;
    cin>>n;
    vector <string> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    map <string,int> ma,mb;
    for (int i=0;i<n;i++) ++ma[a[i]]; 
    for (int i=0;i<n;i++) ++mb[b[i]]; 
    int ans = n;
	for (auto it : ma) ans -= min(it.second, mb[it.first]);
	
	cout << ans << endl;
}


int main(){
    
    // #ifndef ONLINE_JUDGE
    // freopen("/Users/shri/Documents/input.txt","r",stdin);
    // freopen("/Users/shri/Documents/output.txt","w",stdout);
    // #endif
    
    
    
        solution();
    return 0;
}