#include <bits/stdc++.h>

using namespace std;

int x_val = 0, y_val = 0;

void fun(char ch) {
    if (ch == 'L') {
        x_val--;
    }
    if (ch == 'R') {
        x_val++;
    }
    if (ch == 'U') {
        y_val++;
    }
    if (ch == 'D') {
        y_val--;
    }
}
int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        x_val = 0;
        y_val = 0;
        string str;
        cin >> str;
        for (int i = 0; i < n; i++) {
            if (str[i] == str[i - 1] && i > 0)
                continue;
            else if (str[i] == 'L' && str[i - 1] == 'R' && i > 0)
                continue;
            else if (str[i] == 'R' && str[i - 1] == 'L' && i > 0)
                continue;
            else if (str[i] == 'U' && str[i - 1] == 'D' && i > 0)
                continue;
            else if (str[i] == 'D' && str[i - 1] == 'U' && i > 0)
                continue;
            else
                fun(str[i]);
        }
        cout << x_val << " " << y_val << endl;
    }
}
