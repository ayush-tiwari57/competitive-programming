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

int check(int a[],int n,int ele,int req){
    int s=0;
    forn(i,0,n){
        int time=a[i];
        int j=2;
        while(time<=ele){
            s++;
            time=time+(a[i]*j);
            j++;
        }
        if(s>=req) return 1;
    }
    return 0;
}

void solution(){

    // This is the main code
    int num;
    cin>>num;
    int n;
    cin>>n;
    int a[n];
    forn(i,0,n) cin>>a[i];
    int beg=0,end=1e9;
    while(beg<end){
        int mid=beg+(end-beg)/2;
        if(check(a,n,mid,num)) end=mid;
        else beg=mid+1;
    }
    cout<<beg<<endl;
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
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