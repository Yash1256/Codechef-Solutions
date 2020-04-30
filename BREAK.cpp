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
#define forn(n) for (ll i = 0; i < ll(n); i++)
#define forkn(i, k, n) for (ll i = k; i < ll(n); i++)
#define forin(n) for (ll i = ll(n - 1); i >= 0; i--)

void solve(int S) {
    int N;
    cin >> N;
    vector<int> chef(N);
    vector<int> ch_friend(N);
    vector<int> cards;
    for (auto &it : chef)
        cin >> it;
    for (auto &it : ch_friend)
        cin >> it;
    if (S == 1) {
        sort(chef.begin(), chef.end());
        sort(ch_friend.begin(), ch_friend.end());
        bool ok = true;
        map<int, bool> m;
        m[chef[0]] = true;
        if (chef[0] >= ch_friend[0]) {
            cout << "NO\n";
            return;
        }
        m[ch_friend[0]] = true;
        for (int i = 1; i < N; i++) {
            if (!m[chef[i]] or chef[i] >= ch_friend[i]) {
                ok = false;
                break;
            }
            m[chef[i]] = true;
            m[ch_friend[i]] = true;
        }
        if (ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        if (ch_friend == chef)
            cout << "NO\n";
        else {
            cout << "YES\n";
        }
    }
}
int main() {
    // quick;
    // time();
    int tc = 1, S;
    cin >> tc >> S;
    while (tc--) {
        solve(S);
    }
    return 0;
}