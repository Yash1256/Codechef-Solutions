#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int32_t main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        long long int N;
        cin >> N;
        string str;
        cin >> str;
        long long int count_of_1 = 0;
        for (long long int i = 0; i < str.size(); i++) {
            if (str[i] == '1') {
                count_of_1++;
            }
        }
        if (count_of_1 >= 2) {
            long long int result = count_of_1 + (count_of_1 * (count_of_1 - 1)) / 2;
            cout << result << "\n";
        } else
            cout << count_of_1 << "\n";
    }
    return 0;
}
