#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    int a[N], d[N], D1[N];
    for (int i = 0; i < N; i++) {
        a[i] = 0;
        d[i] = 0;
        D1[i] = 0;
    }
    int Q;
    cin >> Q;
    while (Q--) {
        int x, b;
        cin >> x >> b;
        x--;
        b--;
        D1[x] += 1;
        D1[b + 1] -= (b + 1) - x + 1;
        if (b + 2 <= N)
            D1[b + 2] += b - x + 1;
    }
    for (int i = 0; i < N; i++) {
        if (i == 0)
            d[i] = D1[i];
        else
            d[i] = d[i - 1] + D1[i];
    }
    for (int i = 0; i < N; i++) {
        if (i == 0)
            a[i] = d[i];
        else
            a[i] = d[i] + a[i - 1];
    }
    int M;
    cin >> M;
    while (M--) {
        int num;
        cin >> num;
        num--;
        cout << a[num] << "\n";
    }
    return 0;
}
