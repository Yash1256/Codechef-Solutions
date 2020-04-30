#include <bits/stdc++.h>

using namespace std;

long long int fun_5(long long int num) {
    long long int zeros = 0;
    long long int n = num;
    int i = 1;
    while (n) {
        zeros += num / ((int)(pow(5, i)));
        // cout << num / ((int)(pow(5, i))) << " " << ((int)(pow(5, i))) << endl;
        n = num / ((int)(pow(5, i)));
        i++;
    }
    return zeros;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    if (a[0] > b[0] || b[0] > a[0])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}