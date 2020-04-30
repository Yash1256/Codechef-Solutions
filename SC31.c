#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int k = 0; k < t; k++) {
        int n, c = 0;
        scanf("%d", &n);
        char ar[n][10];
        for (int i = 0; i < n; i++)
            scanf("%s", ar[i]);
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < 10; j++) {
                if (((ar[i][j] == '0') && (ar[i + 1][j] == '0')) || ((ar[i][j] == '1') && (ar[i + 1][j] == '1')))
                    ar[i + 1][j] = '0';
                else
                    ar[i + 1][j] = '1';
            }
        }
        for (int i = 0; i < 10; i++)
            if (ar[n - 1][i] == '1')
                c++;
        printf("%d\n", c);
    }
}