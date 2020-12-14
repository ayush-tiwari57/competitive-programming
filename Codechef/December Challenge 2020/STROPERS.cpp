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
#define forn(i, a, b) for (int i = a; i < b; ++i)
#define rforn(i, a, b) for (int i = a; i >= b; i--)

// defined values
#define maxn 200004
#define Mod 1000000007

// fast io
#define FIO()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

using namespace std;

bool check(int flag)
{
    if (flag == 0)
        return true;
    return false;
}

bool check_string(string s, int i)
{
    if (s[i] == '1')
        return true;
    return false;
}
struct VectorHash {
    size_t operator()(const std::vector<int>& v) const {
        std::hash<int> hasher;
        size_t seed = 0;
        for (int i : v) {
            seed ^= hasher(i) + 0x9e3779b9 + (seed<<6) + (seed>>2);
        }
        return seed;
    }
};
void solution()
{

    // This is the main code
    int temp, n, m, cnt = 0;
    string s;
    std::unordered_set<std::vector<int>, VectorHash>set1, set2;
    cin >> s;
    n = s.size();
    cnt = 0;
    forn(i, 0, n)
    {
        cnt = 0;
        int flag;
        vector<int> arr;
        if (check_string(s, i))
        {
            arr.pb(1);
            flag = 1;
            cnt = 1;
            set1.insert(arr);
        }
        else
        {
            arr.pb(1);
            flag = 0;
            set2.insert(arr);
        }
        forn(j, i + 1, n)
        {
            if (!check_string(s, j))
            {
                if (cnt & 1)
                {
                    if (arr.size() != 0 && arr.size() <= 2)
                    {
                        if (arr.size() == 1)
                        {
                            if (check(flag))
                                arr[arr.size() - 1]++;
                            else if (cnt == 1)
                            {
                                flag = 0;
                                arr.pb(1);
                            }
                            else
                            {
                                flag = 1;
                                arr[0] = 1;
                                arr.pb(1);
                                arr.pb(cnt - 1);
                            }
                        }
                        else
                        {
                            if (check(flag))
                            {
                                arr[arr.size() - 1]++;
                                flag = 0;
                            }
                            else if (!check(flag) && cnt != 1)
                            {
                                flag = 1;
                                int kt = arr[arr.size() - 1];
                                arr[0] = arr[0];
                                temp = arr[1];
                                arr[1] = 1;
                                arr.pb(1);
                                arr.pb(cnt - 1);
                            }
                            else if (cnt == 1)
                            {
                                flag = 0;
                                arr.pb(1);
                            }
                        }
                    }
                    else
                    {
                        if (arr.size() == 3)
                        {
                            if (check(flag))
                            {
                                flag = 0;
                                arr[arr.size() - 1]++;
                            }
                            else if (!check(flag))
                            {
                                flag = 1;
                                arr[1]++;
                            }
                        }
                        else if (arr.size() == 4)
                        {
                            if (check(flag))
                            {
                                flag = 0;
                                arr[arr.size() - 1]++;
                            }
                            else if (!check(flag))
                            {
                                flag = 1;
                                arr[2]++;
                            }
                        }
                    }
                }
                else if (!(cnt & 1))
                {
                    if (arr.size() != 0 && arr.size() <= 2)
                    {
                        if (arr.size() == 1)
                        {
                            if (check(flag))
                            {
                                flag = 0;
                                arr[arr.size() - 1]++;
                            }
                            else
                            {
                                flag = 1;
                                temp = arr[0];
                                arr[0] = 1;
                                arr.pb(temp);
                            }
                        }
                        else
                        {
                            if (check(flag))
                            {
                                arr[arr.size() - 1]++;
                                flag = 0;
                            }
                            else
                            {
                                arr[0]++;
                                flag = 1;
                            }
                        }
                    }
                    else
                    {
                        if (arr.size() == 3)
                        {
                            if (check(flag))
                            {
                                arr[arr.size() - 1]++;
                                flag = 0;
                            }
                            else
                            {
                                temp = arr[0];
                                m = arr[1];
                                int p = arr[2];
                                arr[0] = 1;
                                arr[1] = temp;
                                arr[2] = m;
                                arr.pb(p);
                                flag = 1;
                            }
                        }
                        else if (arr.size() == 4)
                        {
                            if (!check(flag))
                            {
                                arr[0]++;
                                flag = 1;
                            }
                            else
                            {
                                arr[arr.size() - 1]++;
                                flag = 0;
                            }
                        }
                    }
                }
            }
            else
            {
                cnt++;
                if (!check(flag))
                {
                    flag = 1;
                    arr[arr.size() - 1]++;
                }
                else
                {
                    arr.pb(1);
                    flag = 1;
                }
            }
            if (check(flag))
            {
                if (arr.size() & 1)
                    set2.insert(arr);
                else
                    set1.insert(arr);
            }
            else
            {
                if (!(arr.size() & 1))
                    set2.insert(arr);
                else
                    set1.insert(arr);
            }
        }
    }
    int ans = set1.size() + set2.size();
    std::cout << ans << endl;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("E:/CP/input.txt", "r", stdin);
    freopen("E:/CP/output.txt", "w", stdout);
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