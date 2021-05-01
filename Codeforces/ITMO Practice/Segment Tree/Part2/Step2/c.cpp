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

ll andbit[4*maxn],operation[4*maxn];

// void build(int ind,int ss,int se){
//     if(ss==se) {
//         segtree[ind]=a[ss];
//         return;
//     }
//     int mid=(ss+se)/2;
//     build(2*ind,ss,mid);
//     build(2*ind+1,mid+1,se);
//     segtree[ind]=segtree[2*ind+1]+segtree[2*ind];
// }

void update(int ind,int ss,int se,int qs,int qe,int ele){
    if(operation[ind]!=0){
        ll dx=operation[ind];
        if(ss!=se){
            operation[2*ind]|=dx;
            operation[2*ind+1]|=dx;
        }
        operation[ind]=0;
        andbit[ind]|=dx;
    }
    if(qs>se || qe<ss) return;
    if(qs<=ss && qe>=se) {
        andbit[ind]|=ele;
        if(ss!=se){
            operation[2*ind]|=ele;
            operation[2*ind+1]|=ele;
        } 
        return; 
    }
    int mid=(ss+se)/2;
    update(2*ind,ss,mid,qs,qe,ele);
    update(2*ind+1,mid+1,se,qs,qe,ele);
    andbit[ind]=andbit[2*ind]&andbit[2*ind+1];
}

int findand(int ind,int ss,int se,int qs,int qe){
    if(operation[ind]!=0){
        int dx=operation[ind];
        if(ss!=se){
            operation[2*ind]|=dx;
            operation[2*ind+1]|=dx;
        }
        operation[ind]=0;
        andbit[ind]|=dx;
    }
    if(qs>se || qe<ss) return pow(2,30)-1;
    if(qs<=ss && qe>=se) {
        if(operation[ind]!=0){
            int dx=operation[ind];
            if(ss!=se){
                operation[2*ind]|=dx;
                operation[2*ind+1]|=dx;
            }
            operation[ind]=0;
            andbit[ind]|=dx;
        }
        // cout<<ind<<" "<<andbit[ind]<<endl;
        return andbit[ind];
    }
    int mid=(ss+se)/2;
    int x=findand(2*ind,ss,mid,qs,qe);
    int y=findand(2*ind+1,mid+1,se,qs,qe);
    // cout<<ind<<" "<<x<<" "<<y<<endl;
    return x&y;
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
            update(1,1,n,l,r,ele);
            // cout<<operation[4];
        }   
        else{
            cin>>l>>r;
            l++;
            cout<<findand(1,1,n,l,r)<<endl;
        }             
    }
    // forn(i,1,10) cout<<andbit[i]<<" ";
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