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
    int a[n+1];
    forn(i,0,n) cin>>a[i];
    if(n==2){
        cout<<1<<endl;
        return;
    }
    int i=1,height=0,x=1,j=1;  
    while (i < n)
		{

			j = i;
			int c = 0;
			height++;
			while (x > 0)
			{
				while ((j + 1 < n) && (a[j + 1] > a[j]))
				{
					j++;
					c++;
				}

				j++;
				x--;
                c++;

			}
			i = j;
			x = c;
		}
		cout << height << endl;

    
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}