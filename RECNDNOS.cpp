#include <bits/stdc++.h>
using namespace std;

#define ll long long

long long mod = 1000000007;

void solve() {
    int n;
    cin >> n;
    map<int, int> m;
    vector<int> v(n);
    for (auto &it : v) {
        cin >> it;
    }
    vector<int> v_new;
    v_new.emplace_back(v[0]);
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1]) {
            v[i] = mod;
        } else {
            v_new.emplace_back(v[i]);
        }
    }
    vector<pair<int, int>> vi;
    set<int> num;
    for (auto &it : v_new) {
        num.insert(it);
    }
    for (auto &it : num) {
        vi.push_back({count(v_new.begin(), v_new.end(), it), it});
    }
    int max = 0, max_val = 0;
    for (int i = 0; i < vi.size(); i++) {
        if (vi[i].first > max) {
            max = vi[i].first;
            max_val = vi[i].second;
        }
    }
    cout << max_val << endl;
}

int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
