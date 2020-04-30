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

void solve() {
    int n, d = 0, k;
    cin >> n;
    vector<int> num(n);
    long long int count = 0;
    for (auto &it : num)
        cin >> it;
    for (int i = 0; i < n; i++) {
        if (num[i] & 1) {
            count++;
            k = 1;
            while ((num[i + 1] & 1) && (i < n - 1)) {
                count += (k + 1);
                k++;
                i++;
            }
        } else if (!(num[i] % 4)) {
            count += ((i - d) * (n - i - 1) + i - d + n - i);
            d = i + 1;
        } else if (!(num[i] & 1) && num[i] % 4) {
            forkn(j, (i + 1), n) {
                if (!(num[j] & 1)) {
                    count += ((i - d) * (n - j - 1) + i - d + (n - j));
                    d = i + 1;
                    break;
                }
            }
        }
    }
    cout << count << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}