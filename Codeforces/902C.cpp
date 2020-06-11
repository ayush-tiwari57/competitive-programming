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

int n,a[200005],m[200005],i=0;
void solution(){

    // This is the main code
	cin>>n;
	while(i<=n) cin>>a[i++];
	for(i=0;i<n;i++) if(a[i]>1 && a[i+1]>1){
		cout<<"ambiguous\n";
		int l=0,k=0,t;
		for(int j=0; j<=n; j++){
			while(a[j]--)	m[k++]=l;
			l=k;
			if(j==i) t=k;
		}
		l=2;
		while(l--){
			for(int j=0; j<k; j++) cout<<((j)? " ":"")<<((j==t && l)? m[j]-1:m[j]);
			cout<<"\n";	
		}
		return ;
	}
	cout<<"perfect\n";
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