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

set<int> s;
vector<int> primeFactors(int n)  
{   vector<int> factor;
    // Print the number of 2s that divide n  
    while (n % 2 == 0)  
    {  
        factor.pb(2);
        s.insert(2);
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            factor.pb(i);
            s.insert(i);
            n = n/i;  
        }  
    }  
      if (n > 2)  {
        s.insert(n);
        factor.pb(n);
        }
    return factor;
}

void solution(){

    // This is the main code
    int n,k;
    cin>>n>>k;
    vector<int> factor;
    s.clear();
    factor=primeFactors(k);
    if(s.size()==1){
        // cout<<"yo";
        int ans=k;
        forn(i,1,n) ans++;
        cout<<ans<<endl;
    }
    else{
        if(factor.size()>n){
            int x=factor.size()/n;
            int i=0;
            ll ans=0;
            while(i<factor.size()){
                int cnt=0;
                ll prod=1;
                while(i<factor.size() && cnt!=x){
                    prod*=factor[i];
                    i++;
                    cnt++;
                }
                ans+=prod;
            }
            cout<<ans<<endl;
        }
        else{
            int ans=0;
            forn(i,0,factor.size()){
                ans+=factor[i];
            }
            ans+=(n-factor.size());
            cout<<ans<<endl;
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
    cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}