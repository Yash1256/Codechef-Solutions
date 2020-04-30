#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n, i, val;
    long long int amount = 0, max = 0;
    cin >> n;
    vector<long long int> v;
    for (i = 0; i < n; i++) {
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());
    for (i = 0; i < n; i++) {
        amount = v[i] * (n - i);
        if (amount > max) {
            max = amount;
        }
    }
    cout << max << endl;
    return 0;
}