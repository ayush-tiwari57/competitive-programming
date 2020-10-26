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
#define forn(i, a, b) for (int i = a; i < b; i++)
#define rforn(i, a, b) for (int i = a; i >= b; i--)

// defined values
#define maxn 200004
#define Mod 1000000007

// fast io
#define FIO() ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

vector<ll> dis;
vector<vector< pair<int,int> >> graph;
int timer, l;
vector<int> tin, tout;
vector<vector<int>> arr;

bool isanc(int u, int v)
{
    return tin[u] <= tin[v] && tout[u] >= tout[v];
}

int lca(int u, int v)
{
    if (isanc(u, v))
        return u;
    if (isanc(v, u))
        return v;
    for (int i = l; i >= 0; --i)
    {
        if (!isanc(arr[u][i], v))
            u = arr[u][i];
    }
    return arr[u][0];
}

void dfs1(int v, int p, ll w)
{
    tin[v] = ++timer;
    arr[v][0] = p;
    dis[v] = w;
    for (int i = 1; i <= l; ++i)
        arr[v][i] = arr[arr[v][i - 1]][i - 1];

    for (auto u : graph[v])
    {
        if (u.first != p)
            dfs1(u.first, v, w + u.second);
    }

    tout[v] = ++timer;
}

void solution()
{

    // This is the main code
    int n, q, r, u, v,w;
    cin >> n >> q >> r;
    // graph=vector<vector<pair<int,int>>>(n);
    graph.assign(n + 1, vector<pair<int,int>>());
    forn(i, 0, n - 1)
    {
        cin >> u >> v >> w;
        graph[u].pb({v, w});
        graph[v].pb({u, w});
    }
    // cout<<dis[1];
    dis.assign(n + 1, -1);
    tin.resize(n + 1);
    tout.resize(n + 1);
    timer = 0;
    l = ceil(log2(n));
    arr.assign(n + 1, vector<int>(l + 1));
    dfs1(r, r, 0);
    // cout<<lca(2,3);
    forn(i, 0, q)
    {
        cin >> u >> v;
        int ancestor = lca(u, v);
        cout <<dis[u] + dis[v] - 2 * dis[ancestor]<<"\n" ;
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("/home/servermonk/Public/competitive-programming/input.txt", "r", stdin);
    freopen("/home/servermonk/Public/competitive-programming/output.txt", "w", stdout);
#endif

    FIO()

    int t = 1;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}