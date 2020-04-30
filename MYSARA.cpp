#include <bits/stdc++.h>
using namespace std;

const long long int mod = 1000000007;

int main() {
    // your code goes here
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long int mul = 1;
        for (int i = 0; i < n - 1; i++) {
            mul = ((mul % mod) * ((long long int)pow(2, (__builtin_popcount(v[i] & v[i + 1])))) % mod) % mod;
        }
        int f = 1;
        for (int i = 0; i < n - 1; i++) {
            if ((v[i] ^ v[i + 1]) & v[i])
                f = 0;
        }
        if (f)
            cout << mul << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}