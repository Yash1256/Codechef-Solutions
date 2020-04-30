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
    int n;
    cin >> n;
    int m, c;
    cin >> m >> c;
    int power_up = 0, power_down = 0;
    while (n--) {
        int x, y, power;
        cin >> x >> y >> power;
        if ((y - m * x - c) > 0)
            power_up += power;
        else
            power_down += power;
    }
    int max = (power_up > power_down) ? power_up : power_down;
    cout << max;
    return 0;
}