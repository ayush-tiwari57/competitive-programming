    #include <bits/stdc++.h>
    #define ll long long
    #define fi first
    #define se second
    #define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
     
    using namespace std;
     
    const int maxn = 100007;
     
    int n, a[maxn], b[maxn], bpre[maxn], pre[maxn];
     
    void upd_pre(int pos)
    {
        for (int i = pos; i <= n; i += (i & -i))
            ++bpre[i];
    }
     
    int get_pre(int pos)
    {
        int res = 0;
        for (int i = pos; i; i -= (i & -i))
            res += bpre[i];
        return res;
    }
     
    void upd(int pos)
    {
        for (int i = pos; i <= n; i += (i & -i))
            ++b[i];
    }
     
    int get(int pos)
    {
        int res = 0;
        for (int i = pos; i; i -= (i & -i))
            res += b[i];
        return res;
    }
     
    int main()
    {
    //    freopen("test.INP","r",stdin);
    //    freopen("BAILAM.OUT","w",stdout);
        // scanf("%d",&test);
        
        
            cin>>n;
            fill(b + 1, b + 1 + n, 0);
            fill(bpre + 1, bpre + 1 + n, 0);
     
            ll res = 0, ans = 0;
            for (int i = 1; i <= n; ++i) cin>>a[i];
            for (int i = n; i >= 1; --i) pre[a[i]] = get_pre(a[i] - 1), upd_pre(a[i]), res += 1LL*pre[a[i]];
     
            for (int i = 1; i < n; ++i)
            {
                cout<<res<<endl;
    //            cout << pre[a[i]] + get(a[i] - 1) << '\n';
                res -= (2*(a[i] - 1) - n + 1), upd(a[i]);
            }
     
            // printf("%lld\n",ans ^ res);
        
        return 0;
    }
     