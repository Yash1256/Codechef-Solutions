#include <bits/stdc++.h>

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
#define ll long long
#define mp make_pair
#define f first
#define s second
#define endl "\n"
#define min(a, b) ((a) > (b)) ? (b) : (a)
#define tc     \
    int t = 1; \
    cin >> t;  \
    while (t--)

using namespace std;

int main() {
    fastio;
    tc {
        ll int N, M;
        cin >> N >> M;
        ll int result = 0;
        for (int i = 0, x; i < N; i++) {
            cin >> x;
            result = (result + x) % M;
        }
        cout << result << endl;
    }
    return 0;
}