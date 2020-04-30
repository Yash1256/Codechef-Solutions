#include <stdio.h>

int main() {
    int t, n, m, k, temp, cnt, x, flag;
    scanf("%d", &t);
    while (t) {
        scanf("%d%d%d", &n, &m, &k);
        temp = k;
        cnt = flag = 0;
        while (temp > 0) {
            if (temp > n) {
                cnt += 1;
                temp = temp - (n + m);
            } else {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            x = n * cnt;
        else
            x = n * cnt + temp;
        printf("%d\n", x);
        t -= 1;
    }
}