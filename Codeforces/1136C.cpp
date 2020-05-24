/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long

//STL
#define pb push_back
#define lb lower_bound
#define ub upper_bound

//loops
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)

// defined values
#define maxn 1000004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;


void solution(){

    // This is the main code
    	int n,m;
	long x;
	cin>>n>>m;
	multiset<long> a[n+m-1],b[n+m-1];
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	{
		cin>>x;
		a[i+j].insert(x);
	}
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	{
		cin>>x;
		b[i+j].insert(x);
	}
	for(int i=0;i<n+m-1;i++)
	if(a[i]!=b[i])
	{
		cout<<"NO";
        return;
	}
    cout<<"YES";

}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
   // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}