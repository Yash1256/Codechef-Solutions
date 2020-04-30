#include <bits/stdc++.h>

#define fifo                       \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define tc1     \
    int tc = 1; \
    cin >> tc;  \
    while (tc--)
#define ll long long

using namespace std;

int main() {
    fifo;
    tc1 {
        string str;
        string result = "";
        int k_val;
        cin >> str >> k_val;
        vector<int> ch(26, 0);
        for (int i = 0; i < str.length(); i++)
            ch[str[i] - 'a'] += 1;
        int it = 0;
        while ((result.length() != str.length()) && (it < 26)) {
            if ((k_val > 0) && (ch[it] == 1)) {
                result += (it + 'a');
                k_val -= 1;
            } else if (ch[it] == 0)
                result += (it + 'a');
            ++it;
        }
        if (result.length() < str.length())
            cout << "NOPE" << endl;
        else
            cout << result << endl;
    }
    return 0;
}