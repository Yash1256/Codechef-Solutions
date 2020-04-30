#include <bits/stdc++.h>

#define fifo                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define ll long long

using namespace std;

int main() {
    fifo;
    int tc = 1;
    int x[400];
    cin >> tc;
    while (tc--) {
        int N, M;
        int d, c, b, a, p, q, y;
        cin >> N >> a >> b >> c >> d >> p >> q >> y;
        for (int i = 1; i <= N; i++)
            cin >> x[i];
        int result = abs(x[a] - x[b]) * p;
        if ((abs(x[a] - x[c]) * p <= y)) {
            result = min(result, y + (abs(x[b] - x[d]) * p) + (abs(x[c] - x[d]) * q));
        }
        cout << result << endl;
    }
}