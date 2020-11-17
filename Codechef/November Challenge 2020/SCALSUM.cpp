#include<bits/stdc++.h>
#define boost ios::sync_with_stdio(false); cin.tie(0)
#define ll long long int
#define uint unsigned int
using namespace std;
const int N = 300009;
 
int n, q, max_dep = 0;
vector<int> g[N], memo[N];
vector<vector<int>> level;
int p[N] , d[N], idx[N];
uint wt[N] , dot[N];
bool known[N];
 
//we also precompute ansqers for query of type (u,u) in the dfs
void dfs(int v, int par = 1, int dep = 0)
{
    p[v] = par;
    d[v] = dep;
    max_dep = max(max_dep, dep);
    dot[v] = dot[par] + wt[v] * wt[v]; //ans for query (v,v)
    for (auto u : g[v]) {
        if (u == par)continue;
        dfs(u, v, dep + 1);
    }
}
 
uint query(int a, int b) {
    uint tot = 0;
    while (a != b and !known[a]) {
        tot += wt[a] * wt[b];
        a = p[a], b = p[b];
    }
    if (a == b)tot += dot[a];
    else tot += memo[d[a]][idx[a] * level[d[a]].size() + idx[b]];
    return tot;
}
 
int main()
{
    boost;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)cin >> wt[i];
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
 
    //After dfs we know depth of each node, so we store them level wise as well.
    level = vector<vector<int>>(max_dep + 1);
    for (int i = 1; i <= n; i++)level[d[i]].push_back(i);
 
    int b = sqrt(n);
    //Precomputing the answers by applying square root Decomposition by depth divide on the tree
    for (int i = 0; i <= max_dep; i += b) {
        int lv = i, sz = level[i].size();
        for (int j = i; j <= min(i + b, max_dep); j++) {
            if (level[j].size() < sz) {
                sz = level[j].size();
                lv = j;
            }
        }
        int id = 0;
        for (auto x : level[lv])idx[x] = id++; //Numbering nodes present in level
        for (auto x : level[lv]) {
            for (auto y : level[lv]) {
                if (idx[x] <= idx[y]) memo[lv].push_back(query(x, y));
                else memo[lv].push_back(memo[lv][idx[y]*sz + idx[x]]);
            }
            known[x] = true; //marking each node in 'lv' level as precomputed level node
        }
    }
    while (q--) {
        int u, v;
        cin >> u >> v;
        cout << query(u, v) << '\n';
    }
    return 0;
}   