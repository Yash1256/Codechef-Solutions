#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define lli long long int

typedef vector<int> vi;

const lli mod = 1e7 + 9;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc = 1;
    cin >> tc;
    while (tc--) {
        int N, K;
        cin >> N >> K;
        vector<char> v(N);
        for (auto &it : v)
            cin >> it;
        for (int i = 0; i < K; i++, N--) {
            if (v[N - 1] == 'T')
                v.pop_back();
            else {
                v.pop_back();
                for (int i = 0; i < N - 1; i++) {
                    if (v[i] == 'H')
                        v[i] = 'T';
                    else
                        v[i] = 'H';
                }
            }
        }
        int result = count(v.begin(), v.end(), 'H');
        cout << result << endl;
        v.clear();
    }
    return 0;
}