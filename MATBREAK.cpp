#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

long long int power(long long int x, unsigned int y) {
    long long int res = 1;  // Initialize result

    x = x % mod;  // Update x if it is more than or
                  // equal to p

    if (x == 0) return 0;  // In case x is divisible by p;

    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % mod;

        // y must be even now
        y = y >> 1;  // y = y/2
        x = (x * x) % mod;
    }
    return res;
}
void solve() {
    long long int n, a;
    unsigned int odd = 1;
    cin >> n >> a;
    long long int ans = 0, u = 1;
    for (int i = 0; i < n; i++, odd += 2) {
        u = power(a, odd);
        ans = ((ans % mod) + (u % mod)) % mod;
        a = (a % mod * u % mod) % mod;
    }
    cout << ans << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
}