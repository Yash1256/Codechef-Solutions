#include <bits/stdc++.h>

#define FASTIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
#define REP(i, a, b) for (int i = a; i < b; i++)
#define tc     \
    int t = 1; \
    cin >> t;  \
    while (t--)
#define ll long long

using namespace std;

int main() {
    FASTIO;
    tc {
        int n, x;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x % 2 == 0)
                v.pb(i + 1);
        }
        int q;
        cin >> q;
        while (q--) {
            int l, r;
            bool flag = true;
            cin >> l >> r;
            for (int i = 0; i < v.size(); i++) {
                if (l <= v[i] && r >= v[i]) {
                    cout << "EVEN" << endl;
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << "ODD" << endl;
        }
    }
    return 0;
}