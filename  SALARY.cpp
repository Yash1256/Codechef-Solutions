#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define speed_upp                    \
    ios_base::sync_with_stdio(NULL); \
    cin.tie(NULL);                   \
    \ cout.tie(NULL);
#define int long long int
#define tc     \
    int t = 1; \
    cin >> t;  \
    while (t--)
#define eb emplace_back
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define RFOR(i, a, b) for (int i = (b); i >= 0; i--)
#define MAX 1e5

typedef vector<int> vi;
typedef vector<pair<int, int>> vpi;

int32_t main() {
    tc {
        int N;
        cin >> N;
        vi v(N);
        for (auto &it : v)
            cin >> it;
        /*int no_of_steps = 0;
        while(1)
        {
            if(count(v.begin() , v.end() , v[0]) == N)
                break;
            else
            {
                no_of_steps += 1;
                sort(v.rbegin() , v.rend());
                for(int i=1 ; i<N ; i++)
                    v[i] += 1;
            }
        }
        cout<<no_of_steps<<"\n";*/
        int result = 0;
        sort(v.begin(), v.end());
        for (int i = 1; i < N; i++)
            v[i] -= v[0];
        for (int i = 1; i < N; i++)
            result += v[i];
        cout << result << "\n";
    }
    return 0;
}
