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
        int N;
        ll int result = 0;
        cin >> N;
        vector<ll int> A(N);
        for (auto &it : A)
            cin >> it;
        vector<ll int> B(N);
        for (auto &it : B)
            cin >> it;
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        for (int i = N - 1; i >= 0; i--)
            result += min(A[i], B[i]);
        cout << result << endl;
    }
    return 0;
}