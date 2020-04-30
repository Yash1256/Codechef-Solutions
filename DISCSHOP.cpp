#include <bits/stdc++.h>

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
#define ll long long
#define mp make_pair
#define f first
#define s second
#define tc     \
    int t = 1; \
    cin >> t;  \
    while (t--)

using namespace std;

void solve(int N) {
    int no_of_digits = floor(log10(N) + 1) - 1;
    int mini = N % (int)pow(10, no_of_digits);
    int num = mini, i = 0;
    while (1) {
        int left_limit = floor(N / pow(10, no_of_digits - i));
        //cout<<"left_limit"<<left_limit<<endl;
        num = num % (int)pow(10, no_of_digits - i - 1);
        int req_num = left_limit * pow(10, no_of_digits - 1 - i) + num;
        i += 1;
        //cout<<mini<<" "<<req_num<<endl;
        mini = (mini < req_num) ? mini : req_num;
        if (i == no_of_digits)
            break;
    }
    cout << mini << endl;
}

int main() {
    fastio;
    tc {
        int N;
        cin >> N;
        solve(N);
    }
    return 0;
}
