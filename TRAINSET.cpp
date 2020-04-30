#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int q1 = 1; q1 <= t; q1++) {
        int n;
        cin >> n;

        map<string, vector<int> > m;

        for (int i = 0; i < n; i++) {
            string st;
            int a;

            cin >> st;
            cin >> a;

            if (m.find(st) == m.end()) {
                if (a == 0) {
                    m[st].push_back(1);
                    m[st].push_back(0);

                } else {
                    m[st].push_back(0);
                    m[st].push_back(1);
                }
            }

            else {
                if (a == 0) {
                    m[st][0]++;
                } else {
                    m[st][1]++;
                }
            }
        }

        int count = 0;

        for (pair<string, vector<int> > p : m) {
            //string str=p.first;
            vector<int> ar = p.second;

            count += max(ar[0], ar[1]);
        }

        cout << count << endl;
    }
}
