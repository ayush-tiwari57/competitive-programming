/* code of Ayush Tiwari
    codeforces- servermonk
    codechef- ayush572000
*/

#include <bits/stdc++.h>
#define ll long long
#define endl "\n"

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

vector<int> a(maxn);

bool check(string t, string p, int ind){
    string temp="";
    int n=t.size();
    forn(i,0,ind+1){
        t[a[i]-1]='$';
    }
    int i=0,j=0;
    while(i<n){
        if(t[i]==p[j]){
            // cout<<i<<" "<<j<<endl;
            i++;
            j++;
            if(j==p.size()) return 1;
            continue;
        }
        i++;
    }
    // cout<<t<<endl;
    return 0;
    
}

void solution(){

    // This is the main code
    string t,p;
    cin>>t>>p;
    forn(i,0,t.size()) cin>>a[i];
    int beg=0,end=t.size()-1,ans=0;
    // cout<<check(t,p,2)<<enld;
    while(beg<=end){
        int mid=(beg+end)/2;
        if(check(t,p,mid)){
            ans=mid+1;
            beg=mid+1;
        }
        else end=mid-1;
    }
    cout<<ans;
    
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  
    
    FIO()   
    
    int t=1;
    // cin>>t;
    while (t--)
    {
        solution();
    }
    return 0;
}