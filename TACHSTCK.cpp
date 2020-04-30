#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, m;
    cin >> N >> m;
    vector<int> v(N);
    for (auto &it : v)
        cin >> it;
    sort(v.rbegin(), v.rend());
    int counter = 0;
    for (int i = 0; i < N - 1; i++) {
        if ((v[i] - v[i + 1]) > m)
            continue;
        else {
            counter += 1;
            i++;
        }
    }
    cout << counter << "\n";
}
