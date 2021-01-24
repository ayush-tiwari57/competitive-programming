    /* code of Ayush Tiwari
        codeforces- servermonk
        codechef- ayush572000
    */
     
    #include <bits/stdc++.h>
    #define ll long long
    #define endl "\n"
    #define int long long
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
     
    int n;
    int a[61],dp[61][2];
     
    int func(int x,int i){
        if(dp[i][x]!=-1) return dp[i][x];
        if(i==n){
            int ans=0;
            if(a[i]==0){
                if(x==1) ans++;
            }
            else{
                if(x==1) ans+=2;
                else ans++;
            }
            return dp[i][x]= ans;
        }
        int ans=0;
        if(a[i]){
            ans+=func(x|1,i+1)+func(x|0,i+1);
        }
        else{
            ans+=func(x&1,i+1)+func(x&0,i+1);
        }
        // cout<<i<<" "<<ans<<endl;
        return dp[i][x]=ans;
    }
     
    void solution(){
     
        // This is the main code
        // int n;
        cin>>n;
        forn(i,0,61){
            forn(j,0,2) dp[i][j]=-1;
        }
        forn(i,1,n+1){
            string s;
            cin>>s;
            if(s=="AND") a[i]=0;
            else a[i]=1;
        }
        cout<<func(0,1)+func(1,1);
    }
     
     
    signed main(){
        
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