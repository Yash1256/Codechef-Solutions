#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define REP(i, a, b) for (int i = a; i < b; i++)

typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n;
        vi numbers, copy_num;
        REP(i, 0, n) {
            cin >> m;
            numbers.pb(m);
        }
        copy_num = numbers;
        sort(numbers.begin(), numbers.end());
        numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
        int max = 0;
        REP(i, 0, numbers.size()) {
            int counter = count(copy_num.begin(), copy_num.end(), numbers[i]);
            max = (max > counter) ? max : counter;
        }
        cout << (n - max) << endl;
    }
}