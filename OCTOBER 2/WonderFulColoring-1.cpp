#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        map<char, int> m;
        int res = 0;
        for (int i = 0; i < (int)s.size(); ++i) {
            m[s[i]]++;
            if (m[s[i]] <= 2) {
                res++;
            }
        }
        cout << res / 2 << '\n';
    }
}
