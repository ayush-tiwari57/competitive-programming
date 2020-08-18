#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 1666666
int n,m,k;
struct str{
    int v,w,id;
    bool operator<(const str &temp) const{
        return w>temp.w;
    }
};
vector<int> ans;
vector<str> v[N];
int vis[N];
priority_queue<str> q;
void dij(){
    vis[1]=1;
    while(!q.empty()&&k){
        struct str temp=q.top();
        q.pop();
        if(vis[temp.v]) continue;
        vis[temp.v]=1;
        ans.push_back(temp.id);
        k--;
    //	if(ans.size()>=k) break;
        for(int i=0;i<v[temp.v].size();i++){
            if(!vis[v[temp.v][i].v]){
            //	vis[v[temp.v][i]]=1;
                v[temp.v][i].w+=temp.w;
                q.push(v[temp.v][i]);
            }
        }
    }
}
signed main(){
    cin>>n>>m>>k;
    int x,y,z;
    for(int i=1;i<=m;i++){
        cin>>x>>y>>z;
        v[x].push_back((str){y,z,i});
        v[y].push_back((str){x,z,i});
    }
    for(int i=0;i<v[1].size();i++) q.push(v[1][i]);
    dij();
    cout<<ans.size()<<'\n';
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}