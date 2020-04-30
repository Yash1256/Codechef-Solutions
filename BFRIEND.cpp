#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#define speed ios_base::sync_with_stdio(0);
#define upp     \
    cin.tie(0); \
    cout.tie(0);
#define eb emplace_back
#define ll long long
#define f first
#define s second
#define testcase \
    int tc = 1;  \
    cin >> tc;   \
    while (tc--)
#define max 1000000

int main() {
    speed upp
        testcase {
        ll N, a, b, c;
        cin >> N >> a >> b >> c;
        vector<ll> flour(N);
        for (auto &it : flour)
            cin >> it;
        ll time;
        ll diff = 0;
        ll min = abs(flour[0] - b) + c + abs(flour[0] - a);
        time = min;
        for (int i = 1; i < N; i++) {
            diff = abs(flour[i] - b) + abs(flour[i] - a);
            if (min > diff) {
                time = abs(flour[i] - a) + c + abs(flour[i] - b);
                min = diff;
            }
        }
        cout << time << endl;
    }
    return 0;
}
