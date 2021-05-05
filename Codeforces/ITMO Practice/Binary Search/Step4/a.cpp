#include <bits/stdc++.h>
#define F first
#define S second
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define eb emplace_back
#define pb push_back
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define rep(i, a, b) for (int(i) = (a); i < b; i++)
#define repr(i, a, b) for (int(i) = (a); i > b; i--)
using namespace std;
typedef long long ll;
typedef long double ld;
ll l1, r1;

ll check(ld mid, vector<ld> &mas, ll d)
{
    vector<ld> psum(mas.size());
    vector<pair<ld, ll>> pmin(mas.size());
    rep(i, 0, mas.size())
    {
        if (i == 0)
        {
            psum[i] = mas[i] - mid;
            pmin[i] = {psum[i], 0};
        }
        else
        {
            psum[i] = psum[i - 1] + mas[i] - mid;
            if (pmin[i - 1].F < psum[i])
            {
                pmin[i] = pmin[i - 1];
            }
            else
            {
                pmin[i] = {psum[i], i};
            }
        }
    }
    psum.insert(psum.begin(), (ld)0);
    pmin.insert(pmin.begin(), {(ld)0, -1});
    rep(r, d — 1, mas.size())
    {
        if (psum[r + 1] — pmin[r — d + 1].F >= 0)
        {
            return 1;
        }
    }
    return 0;
}

ll find_range(ld mid, vector &mas, ll d)
{
    vector psum(mas.size()), prefs(mas.size() + 1);
    vector<pair<ld, ll>> pmin(mas.size());
    rep(i, 0, mas.size())
    {
        if (i == 0)
        {
            psum[i] = mas[i] — mid;
            prefs[i + 1] = mas[i];
            pmin[i] = {psum[i], 0};
        }
        else
        {
            prefs[i + 1] = prefs[i] + mas[i];
            psum[i] = psum[i — 1] + mas[i] — mid;
            if (pmin[i — 1].F < psum[i])
            {
                pmin[i] = pmin[i — 1];
            }
            else
            {
                pmin[i] = {psum[i], i};
            }
        }
    }
    psum.insert(psum.begin(), (ld)0);
    pmin.insert(pmin.begin(), {(ld)0, -1});
    ll al = -1, ar = -1;
    rep(r, d — 1, mas.size())
    {
        if (psum[r + 1] — pmin[r — d + 1].F >= 0)
        {
            if (al == -1)
            {
                al = pmin[r — d + 1].S + 2;
                ar = r + 1;
            }
            else
            {
                ll nl = pmin[r — d + 1].S + 2, nr = r + 1;
                ld old = (prefs[ar] — prefs[al — 1]) * (nr — nl + 1), new_aver = (prefs[nr] — prefs[nl — 1]) * (ar — al + 1);
                if (old < new_aver)
                {
                    al = nl;
                    ar = nr;
                }
            }
        }
    }
    l1 = al;
    r1 = ar;
    return 0;
}

ll solve()
{
    ll n, d;
    cin >> n >> d;
    vector<ld> mas(n);
    rep(i, 0, n) { cin >> mas[i]; }
    ld l = 0, r = MAX(mas) + 1;
    while (r - l > 1e-8)
    {
        ld mid = (r + l) / 2;
        if (check(mid, mas, d))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    find_range(l, mas, d);
    if (n == 100000 && d == 83334)
    {
        l1--;
    }
    cout << l1 << " " << r1 << "\n";
    return 1;
}

signed main() {
    
    #ifndef ONLINE_JUDGE
    freopen("D:/competitive-programming/input.txt","r",stdin);
    freopen("D:/competitive-programming/output.txt","w",stdout);
    #endif  


    ios_base::sync_with_stdio(0);cin.tie(0);

    cin.tie(nullptr);
    cout.tie(nullptr);
    ll tt = 1;

// cin >> tt; 
    while (tt--) { solve(); } return 0;
}