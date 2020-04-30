#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tc = 1;
    cin >> tc;
    int N, M;
    while (tc--) {
        cin >> N >> M;
        vector<int> v(N);
        vector<int> ar(M, 0);
        vector<int> arc(M, 0);
        for (int i = 0; i < N; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < N; i++) {
            int temp;
            cin >> temp;
            ar[v[i] - 1] += temp;
            arc[v[i] - 1]++;
        }
        int min = 2501;
        for (int i = 0; i < M; i++) {
            if (arc[i] > 0) {
                min = (min > ar[i]) ? ar[i] : min;
            }
        }
        cout << min << endl;
    }
}