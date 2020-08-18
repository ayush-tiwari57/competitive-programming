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
#define mp make_pair
#define all(v) v.begin(), v.end()

//loops
#define forn(i,a,b) for(int i=a;  i<b; i++)
#define rforn(i,a,b) for(int i=a; i>=b; i--)

// defined values
#define maxn 200004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;


void solution(){

    // This is the main code
    int n;
	cin>>n;
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		
	cin>>a[i];
	sum+=a[i];
    }
	
	vector<int>one;
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			one.push_back(i);
			a[i]=0;
		}
	}
	if(sum<2*n-2)
	{
		cout<<"NO";
		return;
	}
	
	int t=one.size();
	cout<<"YES "<<n-t-1+min(2 ,t)<<endl;
	cout<<n-1<<endl;
	int lt=-1;
	if(!one.empty()){
	
    lt=one.back();
	one.pop_back();
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            
        if(lt!=-1)
        {
            --a[lt];
            --a[i];
            cout<<lt+1<<" "<<i+1<<endl;
        }
        lt=i;
    }
    }
    
    for(int i=n-1;i>=0;i--)
    {
        while(a[i]>0 && !one.empty() )
        {
            a[i]--;
            cout<<i+1<<" "<<one.back()+1<<endl;
            one.pop_back();
        }
    }

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