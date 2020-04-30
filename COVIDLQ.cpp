#include <bits/stdc++.h>

using namespace std;

#define ll long long
const ll int mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    std::ostringstream vts;
    if (!v.empty()) {
        // Convert all but the last element to avoid a trailing ","
        std::copy(v.begin(), v.end() - 1,
                  std::ostream_iterator<int>(vts, ""));

        // Now add the last element with no delimiter
        vts << v.back();
    }
    vector<int> x;
    string str = vts.str();
    size_t found = str.find('1');
    if (found != string::npos)
        x.push_back(found);
    while (1) {
        found = str.find('1', found + 1);
        if (found != string::npos)
            x.push_back(found);
        else
            break;
    }
    for (int i = 0; i < x.size() - 1; i++) {
        x[i] = x[i + 1] - x[i];
        if (x[i] < 6) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}