#include <bits/stdc++.h>

using namespace std;

#define ll long long
const ll int mod = 1e9 + 7;

void solve() {
    int n, temp;
    cin >> n;
    vector<int> v;
    long long int max_p = 0;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        max_p = ((max_p % mod) + (temp % mod)) % mod;
        v.push_back(temp);
    }
    sort(v.rbegin(), v.rend());
    max_p = v[0];
    ll int minus = 0;
    for (int i = 1; i < n; i++) {
        if (((v[i] % mod) - (++minus) % mod) % mod > 0 && v[i] > 0) {
            max_p = ((max_p % mod) + (v[i] % mod) - (minus) % mod) % mod;
        }
    }
    cout << max_p << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}