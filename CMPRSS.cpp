#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> v(N);
    for (auto &it : v)
        cin >> it;
    for (int i = 0; i < N; i++) {
        int count = 0;
        if ((v[i + 1] - v[i] == 1) && (i + 1) < N) {
            i++;
            while ((v[i + 1] - v[i] == 1) && (i < N)) {
                i++;
                count++;
            }
            if (count == 0)
                cout << v[i - count - 1] << "," << v[i];
            else
                cout << v[i - count - 1] << "..." << v[i];
            if (i == N - 1)
                continue;
            else
                cout << ",";
        } else {
            cout << v[i];
            if (i == N - 1)
                continue;
            else
                cout << ",";
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}