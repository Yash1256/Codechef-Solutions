#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

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

vector<pair<vector<ll>, vector<ll>>> seg;

void build(vector<pl>& v, ll l, ll r, ll ind) {
    if (l >= r) {
        seg[ind].ff.pb(v[l].ff);
        seg[ind].ss.pb(v[l].ss);
        return;
    }
    int mid = l + ((r - l) / 2);
    build(v, l, mid, (ind << 1) + 1);
    build(v, mid + 1, r, (ind << 1) + 2);
    ll indl = ((ind << 1) + 1);
    ll indr = indl + 1;
    seg[ind].ff.clear();
    seg[ind].ss.clear();
    ll tot = seg[indl].ff.size() + seg[indr].ff.size();
    seg[ind].ff.resize(tot);
    seg[ind].ss.resize(tot);
    ll x = 0, y = 0, index = 0;
    while (x < seg[indl].ff.size() && y < seg[indr].ff.size()) {
        if (seg[indl].ff[x] < seg[indr].ff[y]) {
            seg[ind].ff[index] = (seg[indl].ff[x]);
            x++;
        } else {
            seg[ind].ff[index] = (seg[indr].ff[y]);
            y++;
        }
        index++;
    }
    while (x < seg[indl].ff.size()) {
        seg[ind].ff[index] = (seg[indl].ff[x]);
        x++;
        index++;
    }
    while (y < seg[indr].ff.size()) {
        seg[ind].ff[index] = (seg[indr].ff[y]);
        y++;
        index++;
    }
    x = 0;
    y = 0;
    index = 0;
    while (x < seg[indl].ss.size() && y < seg[indr].ss.size()) {
        if (seg[indl].ss[x] < seg[indr].ss[y]) {
            seg[ind].ss[index] = (seg[indl].ss[x]);
            x++;
        } else {
            seg[ind].ss[index] = (seg[indr].ss[y]);
            y++;
        }
        index++;
    }
    while (x < seg[indl].ss.size()) {
        seg[ind].ss[index] = (seg[indl].ss[x]);
        x++;
        index++;
    }
    while (y < seg[indr].ss.size()) {
        seg[ind].ss[index] = (seg[indr].ss[y]);
        y++;
        index++;
    }
    return;
}

ll query(ll indl, ll indr, ll l, ll r, ll val, ll curr) {
    if (indl == l && indr == r) {
        ll tot = seg[curr].ff.size();
        ll c1 =
            tot - (lower_bound(seg[curr].ff.begin(), seg[curr].ff.end(), val + 1) -
                   seg[curr].ff.begin());
        ll c2 = (upper_bound(seg[curr].ss.begin(), seg[curr].ss.end(), val - 1) -
                 seg[curr].ss.begin());
        tot -= (c1 + c2);
        return tot;
    }
    int mid = l + ((r - l) / 2);
    ll ans = 0;
    ll vl, vr;
    if (indl <= mid) {
        vl = query(indl, (indr < mid ? indr : mid), l, mid, val, ((curr << 1) + 1));
    }
    if (indr > mid) {
        vr = query((indl > mid ? indl : mid + 1), indr, mid + 1, r, val,
                   ((curr << 1) + 2));
        if (indl <= mid) {
            vl += vr;
        } else {
            vl = vr;
        }
    }
    return vl;
}

void solve() {
    int n, q;
    scanf("%d %d", &n, &q);
    vector<ll> v(n);
    seg.clear();
    seg.resize(4 * n);
    forn(n) { scanf("%d", &v[i]); }
    vector<pl> pv(n - 1);
    forn(n - 1) {
        pv[i] = {v[i], v[i + 1]};
        if (pv[i].ff > pv[i].ss) {
            swap(pv[i].ff, pv[i].ss);
        }
    }
    build(pv, 0, n - 2, 0);
    int x1, x2, y;
    while (q--) {
        scanf("%d %d %d", &x1, &x2, &y);
        ll ans = query(x1 - 1, x2 - 2, 0, n - 2, y, 0);
        printf("%d\n", ans);
    }
}

int main() {
    quick;
    ll t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
}