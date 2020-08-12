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
#define maxn 1000009
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

int fen[maxn];
void update(int ind,int upd,int n){
    while(ind<n){
        fen[ind]+=upd;
        ind+=((ind)&(-ind));
    }
}

int sum(int ind){
    int s=0;
    while(ind>0){
        s+=fen[ind];
        ind-=((ind)&(-ind));
    }
    return s;
}

void solution(){

    // This is the main code
    int n,q,x;
    cin>>n>>q;
    int cnt[n+1]={};
    forn(i,1,n+1){
        cin>>x;
        cnt[x]+=1;
        update(x,1,n+1);
    }
    // forn(i,0,n+1) cout<<cnt[i]<<" ";
    while(q--){
        cin>>x;
        if(x>=0){
            update(x,1,n+1);
            cnt[x]+=1;
        }
        else{
            int beg=0,end=n+1;
            while(beg<end){
                x=abs(x);
                int mid=(beg+end)/2;
                int s=sum(mid);
                if(x<=s) end=mid;
                else beg=mid+1;
            }      
            cnt[beg]-=1;
            // cout<<beg<<endl;
            update(beg,-1,n+1);
        }
    }
    int ans=0;
    forn(i,0,n+1){
        if(cnt[i]>=1) ans=i;
    }
    cout<<ans;
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