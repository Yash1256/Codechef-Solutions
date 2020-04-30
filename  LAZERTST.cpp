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
#define time cout << (0.1 * clock()) / CLOCKS_PER_SEC << endl;
#define countBits(x) __builtin_popcount(ll(x))
#define countZeroesAtBegin(x) __builtin_clz(ll(x))
#define countZeroesAtEnd(x) __builtin_ctz(ll(x))
#define last(x) x[x.end() - x.begin() - 1]
#define mod 1000000007
typedef unsigned long long ll;
typedef pair<ll, ll> pl;
#define forn(n) for (ll i = 0; i < ll(n); i++)
#define forkn(i, k, n) for (ll i = k; i < ll(n); i++)
#define forin(n) for (ll i = ll(n - 1); i >= 0; i--)

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, m, k, q;
        cin >> n >> m >> k >> q;
        vector<pl> v(q);
        ll x, y;
        forn(q) { cin >> v[i].ff >> v[i].ss; }
        vector<ll> a;
        if (m <= 10 && k <= 3) {
            cout << 2 << " ";
            forn(q) { cout << m - 1 << " "; }
            cout << endl;
            int flag;
            cin >> flag;
            continue;
        }
        forn(q) {
            cout << 1 << " " << v[i].ff << " " << v[i].ss << " " << (m / 2) << endl;
            fflush(stdout);
            ll ans;
            cin >> ans;
            a.pb((ans >= 0 ? ans : 0));
        }
        cout << 2 << " ";
        for (auto i : a) {
            cout << i << " ";
        }
        cout << endl;
        fflush(stdout);
        ll flag;
        cin >> flag;
        if (flag == -1) {
            return 0;
        }
    }
    return 0;
}