#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define bg begin
#define ff first
#define ss second
#define PI 3.14
#define quick                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
#define time cout << (0.1 * clock()) / CLOCKS_PER_SEC << endl;
#define countBits(x) __builtin_popcount(ll(x))
#define countZeroesAtBegin(x) __builtin_clz(ll(x))
#define countZeroesAtEnd(x) __builtin_ctz(ll(x))
#define last(x) x[x.end() - x.begin() - 1]
#define mod 1000000007
typedef int ll;
typedef pair<ll, ll> pl;
const ll MAX = 1e5;
#define forn(n) for (ll i = 0; i < ll(n); i++)
#define forkn(i, k, n) for (ll i = k; i < ll(n); i++)
#define forin(n) for (ll i = ll(n - 1); i >= 0; i--)

vector<ll> seg;

void build(vector<int> &v, ll l, ll r, ll ind) {
    if (l >= r) {
        seg[ind] = v[l];
        return;
    }
    int mid = l + ((r - l) / 2);
    build(v, l, mid, (ind << 1) + 1);
    build(v, mid + 1, r, (ind << 1) + 2);
    ll indl = ((ind << 1) + 1);
    ll indr = indl + 1;
    seg[ind] = seg[indl] + seg[indr];
    return;
}

ll query(ll indl, ll indr, ll l, ll r, ll curr) {
    if (indl == l && indr == r) {
        cout << seg[curr] << endl;
        return seg[curr];
    }
    int mid = l + ((r - l) / 2);
    ll ans = 0;
    ll vl, vr;
    if (indl <= mid) {
        vl = query(indl, (indr < mid ? indr : mid), l, mid, ((curr << 1) + 1));
    }
    if (indr > mid) {
        vr = query((indl > mid ? indl : mid + 1), indr, mid + 1, r,
                   ((curr << 1) + 2));
        if (indl <= mid) {
            vl += vr;
        } else {
            vl = vr;
        }
    }
    // cout << vl << " ";
    return vl;
}
void solve() {
    string str;
    cin >> str;
    int count = 0, length = 0;
    char ch;
    for (int i = 0; i < str.length();) {
        count = 1;
        if (i == str.length() - 1) {
            length += 2;
            break;
        }
        while (str[i] == str[++i]) {
            count++;
        }
        length += floor(log10(count) + 1) + 1;
    }
    if (length >= str.length())
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main() {
    quick;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
}