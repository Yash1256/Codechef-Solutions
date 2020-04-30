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

void solve() {
    int x, k;
    cin >> x >> k;
    vector<int> factors;
    while (x % 2 == 0) {
        factors.push_back(2);
        x /= 2;
    }
    for (int i = 3; i * i <= x; i = i + 2) {
        while (x % i == 0) {
            x = x / i;
            factors.push_back(i);
        }
    }
    if (x > 2)
        factors.push_back(x);
    if (factors.size() < k) {
        cout << 0 << endl;
        return;
    }
    cout << 1 << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
