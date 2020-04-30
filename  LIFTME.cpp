#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    int x, y, prev = 0;
    long long int ans = 0;
    bool first = true;
    while (q--) {
        cin >> x >> y;
        ans += abs(prev - x);
        ans += abs(y - x);
        prev = y;
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