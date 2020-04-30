#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> v_copy(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        v_copy = v;
        int f_indx, s_indx;
        sort(v_copy.begin(), v_copy.end());
        int maxi = v_copy[n - 1];
        for (int i = 0; i < n; i++) {
            if (v[i] == maxi) {
                f_indx = i;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            if (v[i] == maxi) {
                s_indx = i;
            }
        }
        if ((s_indx - f_indx) > n / 2)
            cout << 0 << endl;
        else
            cout << ((n / 2) - (s_indx - f_indx)) << endl;
        v_copy.clear();
        v.clear();
    }
}
