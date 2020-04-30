#include <iostream>
#include <vector>

using namespace std;

#define P2(n) n, n ^ 1, n ^ 1, n
#define P4(n) P2(n), P2(n ^ 1), P2(n ^ 1), P2(n)
#define P6(n) P4(n), P4(n ^ 1), P4(n ^ 1), P4(n)
#define LOOK_UP P6(0), P6(1), P6(1), P6(0)

unsigned int table[256] = {LOOK_UP};

int Parity(int num) {
    int max = 16;

    while (max >= 8) {
        num = num ^ (num >> max);
        max = max / 2;
    }

    return table[num & 0xff];
}
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    scanf("%d", &t);
    while (t--) {
        int N, Q;
        scanf("%d %d", &N, &Q);
        int odd, even, temp;
        odd = even = 0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &temp);
            if (Parity(temp))
                odd++;
            else
                even++;
        }
        int P;
        while (Q--) {
            scanf("%d", &P);
            if (Parity(P))
                printf("%d %d\n", odd, even);
            else
                printf("%d %d\n", even, odd);
        }
    }
    return 0;
}