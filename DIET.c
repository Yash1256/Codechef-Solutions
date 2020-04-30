#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m, leftp = 0, flag = 1, con = 0;
        scanf("%d %d", &n, &m);
        int ar[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &ar[i]);
        for (int i = 0; i < n; i++) {
            leftp = ar[i] - m + con;
            if (leftp < 0) {
                printf("NO %d\n", i + 1);
                flag = 0;
                break;
            } else
                con = leftp;
        }
        if (flag == 1)
            printf("YES\n");
    }
}