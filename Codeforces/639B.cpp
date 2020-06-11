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
    	int n,d,h;
        scanf("%d%d%d",&n,&d,&h);
        if (d>2*h || n<=d || (h==1 && d==1 && n!=2))
        {
            printf("-1");
            return;
        }
        for (int i=0;i<d;i++)
        {
            if (i==h)
            printf("1 %d\n",i+2);
            else
            printf("%d %d\n",i+1,i+2);
        }
        for (int i=d+1;i<n;i++)
        printf("%d %d\n",h,i+1);

}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt","r",stdin);
    freopen("E:/CP/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    //cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}