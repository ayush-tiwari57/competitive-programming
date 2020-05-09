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


int n,k,m,i,x,y,r,a[179000];
void solution(){

    // This is the main code
    	int n,m,k;
	cin>>n>>m>>k;
	int b,a[n-1],c;
	cin>>b;
	for(int i=0;i<n-1;i++)
	{
		scanf("%d",&c);
		a[i]=c-b-1;
		b=c;
	}
	sort(a,a+n-1);
	b=n;
	for(int i=0;i<n-k;i++)b+=a[i];
	cout<<b;

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