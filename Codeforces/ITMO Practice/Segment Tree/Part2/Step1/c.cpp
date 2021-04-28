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
#define maxn 100004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);


using namespace std;

vector<pair<ll,ll>> segtree(maxn);


void assign(int ind,int ss,int se,int qs,int qe,ll ele,ll turn){
    if(qs>se || qe<ss) return;
    if(qs<=ss && qe>=se) {
        segtree[ind]={ele,turn};
        return;
    }
    int mid=(ss+se)/2;
    assign(2*ind,ss,mid,qs,qe,ele,turn);
    assign(2*ind+1,mid+1,se,qs,qe,ele,turn);
}

pair<ll,ll> get(int ind,int ss,int se,int qi){
    if(ss==se){
        return segtree[ind];
    } 
    int mid=(ss+se)/2;
    pair<ll,ll> res;
    if(qi<=mid) res= get(2*ind,ss,mid,qi);
    else res=get(2*ind+1,mid+1,se,qi);
    if(res.second>segtree[ind].second) return res;
    else return segtree[ind];
}
void solution(){

    // This is the main code
    int n,m,l,r,t,ele;
    cin>>n>>m;
    forn(i,0,m){
        cin>>t;
        if(t==1){
            cin>>l>>r>>ele;
            l++;
            assign(1,1,n,l,r,ele,i+1);
            // forn(i,1,4*n+1) cout<<segtree[i].first<<" "<<segtree[i].second<<")"<<" ";
            // cout<<endl;
        }   
        else{
            cin>>l;
            l++;
            cout<<get(1,1,n,l).first<<endl;
        }             
    }
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
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