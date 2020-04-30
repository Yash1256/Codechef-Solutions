#include <bits/stdc++.h>

using namespace std;

int main(void) {
    // your code goes here
    int t, r, c;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &r, &c);
        if (r != c) {
            while (r != c) {
                if (r < c) {
                    ++r;
                    --c;
                } else {
                    --r;
                    ++c;
                }
            }
            printf("21\n");  // +2
            printf("%d %d\n1 1\n", r, c);
        } else if (r == 1)
            printf("19\n");  // +0
        else {
            printf("20\n");  // +1
            printf("1 1\n");
        }

        printf("8 8\n7 7\n8 6\n3 1\n4 2\n5 1\n8 4\n7 3\n8 2\n7 1\n3 5\n1 3\n6 8\n5 7\n4 8\n1 5\n2 6\n1 7\n2 8\n");
    }
    return 0;
}
