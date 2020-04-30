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
    int N;
    scanf("%d", &N);
    if (N == 1)
        printf("1\n");
    else
        printf("%d\n", N / 2);
    if (N <= 3) {
        printf("%d ", N);
        for (int i = 1; i <= N; i++)
            printf("%d ", i);
        printf("\n");
        return;
    }
    printf("3 1 2 3\n");
    for (int i = 4; i <= N; i += 2) {
        if (N - i >= 1)
            printf("2 %d %d\n", i, i + 1);
        else
            printf("1 %d\n", i);
    }
}

int main() {
    quick;
    int tc = 1;
    scanf("%d", &tc);
    while (tc--) {
        solve();
        // cout << endl;
    }
    return 0;
}
