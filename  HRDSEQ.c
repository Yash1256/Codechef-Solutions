#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    for (int x = 0; x < t; x++) {
        scanf("%d", &n);
        int ar[n], c = 0;
        ar[0] = 0;
        ar[1] = 0;
        for (int i = 2, k = 1; i < n; i++, k = 1) {
            int n = ar[i - 1];
            for (int j = i - 2; j >= 0; j--)
                if (n == ar[j]) {
                    k = 0;
                    ar[i] = i - j - 1;
                    break;
                }
            if (k == 1)
                ar[i] = 0;
        }
        for (int i = 0; i < n; i++)
            if (ar[n - 1] == ar[i])
                c++;
        printf("%d\n", c);
    }
}