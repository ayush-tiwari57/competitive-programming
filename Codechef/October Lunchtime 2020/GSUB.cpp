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


int parent[maxn];

void make_set(int v) {
    parent[v] = v;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}

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
    set<int> s,pre;
    memset(parent,0,sizeof(parent));
    vector<int> a(n);
    forn(i,0,n){
        cin>>a[i];
        make_set(i+1);
    }


   s= primeFactors(a[0]);
    for(auto x: s) pre.insert(x);
    
    forn(i,1,n){
        
       s= primeFactors(a[i]);
        for(auto x: s){
            // cout<<x<<" ";
            if(pre.find(x)!=pre.end()) ans=i+1;
            pre.insert(x);
        }
    }
    cout<<ans;

    
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