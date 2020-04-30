#include <bits/stdc++.h>

#define foi(n) for (int i = 0; i < n; i++)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fixed() \
    ;           \
    cout << fixed << setprecision(20);
#define tc     \
    int t = 1; \
    cin >> t;  \
    while (t--)

using namespace std;

//for declaring most used global variables and constants
const int mod = 1e9 + 7;

//For Calculating nCr
template <typename T>
T nCr(T n, T r) {
    if (r > n - r) r = n - r;  // because C(n, r) == C(n, n - r)
    int ans = 1, i;
    for (i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }
    return ans;
}

//power optimized
template <typename T, typename T2>
T2 power(T x, T y) {
    if (y == 0) return 1;
    T2 res = power(x, y / 2);
    if (y % 2) return res * res * x;
    return res * res;
}

//return number of set bits in a given number
template <typename T>
int countSetBits(T n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

//return true if number is prime
template <typename T>
bool isPrime(T n) {
    // Corner cases
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

//return true if string is palindrome

int main() {
    fast
        tc {
        string str;
        cin >> str;
        sort(str.rbegin(), str.rend());
        cout << str << endl;
        str.clear();
    }
}