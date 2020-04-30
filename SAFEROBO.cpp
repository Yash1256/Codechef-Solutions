#include <bits/stdc++.h>

using namespace std;

void solve() {
    string str;
    cin >> str;
    int sa, sb;
    cin >> sa >> sb;
    int dots = str.length() - 1;
    int alice = 0, bob = dots;
    while (1) {
        if (str[alice] != 'A') {
            alice++;
        }
        if (str[bob] != 'B') {
            bob--;
        }
        if (str[alice] == 'A' && str[bob] == 'B') {
            break;
        }
    }
    // cout << alice << " " << bob << endl;
    bool ok = false;
    while (1) {
        if (alice == bob) {
            ok = true;
            break;
        } else {
            alice += sa;
            bob -= sb;
        }
        if (alice > bob) {
            break;
        }
        // cout << alice << " " << bob << endl;
    }
    if (ok)
        cout << "unsafe" << endl;
    else
        cout << "safe" << endl;
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