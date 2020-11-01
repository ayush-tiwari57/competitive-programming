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
#define maxn 100004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;


int arr[maxn];

void sieve() 
{ 
    arr[1] = 1; 
    for (int i=2; i<maxn; i++) 
  
        arr[i] = i; 
  
    for (int i=4; i<maxn; i+=2) 
        arr[i] = 2; 
  
    for (int i=3; i*i<maxn; i++) 
    { 
        if (arr[i] == i) 
        { 
            for (int j=i*i; j<maxn; j+=i) 
  
                if (arr[j]==j) 
                    arr[j] = i; 
        } 
    } 
} 

set<int> primeFactors(int x) 
{ 
    set<int> s; 
    while (x != 1) 
    { 
        s.insert(arr[x]); 
        x = x / arr[x]; 
    } 
    return s; 
} 

void solution(){

    int n,ans=1;
    cin>>n;
    set<int> s;
    vector<int> a(n);
    forn(i,0,n) cin>>a[i];
    vector<int> high(maxn,0),low(maxn,0),pre(maxn,0);
    forn(i,0,n){
        s=primeFactors(a[i]);
        for(auto x: s){
            if(low[x]==0) low[x]=i+1;
            high[x]=i+1;
        }
    }

    forn(i,2,maxn){
        pre[low[i]]++;
        pre[high[i]]--;
    }
    forn(i,1,maxn) pre[i]+=pre[i-1];
    forn(i,1,maxn){
        if(pre[i]==0){
            cout<<i<<endl;
            return;
        }
    } 
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt","r",stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    ll t=1;
    cin>>t;
    sieve();
    while (t--)
    {
        solution();
    }
    return 0;
}