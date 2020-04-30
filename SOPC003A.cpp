#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<float> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    int count = 0;
    sort(num.begin(), num.end());
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (num[i] >= num[j] / 2.0)
                count++;
        }
    }
    cout << count << endl;
}
int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
}