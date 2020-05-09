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
      int n;
  string s;
  int x;
  char y;
 
  int p1=-2e9,p2=2e9;
 
  cin>>n;
  for (int i = 0; i < n; ++i)
  {
    cin>>s>>x>>y;
    if(s=="<" and y=='Y') p2=min(x-1,p2);
    else if(s=="<" and y=='N') p1=max(x,p1);
    else if(s==">" and y=='Y') p1=max(x+1,p1);
    else if(s==">" and y=='N') p2=min(x,p2);
    else if(s=="<=" and y=='Y') p2=min(x,p2);
    else if(s=="<=" and y=='N') p1=max(x+1,p1);
    else if(s==">=" and y=='Y') p1=max(x,p1);
    else if(s==">=" and y=='N') p2=min(x-1,p2);
  }
  if(p1<=p2) cout<<p1;
  else cout<<"Impossible";

}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    
    ll t=1;
    
    while (t--)
    {
        solution();
    }
    return 0;
}