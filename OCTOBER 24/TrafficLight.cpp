#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, i, j, n;
    cin >> t;
    while(t--) {
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        if(c=='g') {cout << "0\n"; continue;}
        s+=s;
        for(i=0; i<s.size(); i++) {
            if(s[i]==c) break;
        }
        j = i;
        int ans = 0;
        for(; i<s.size(); i++) {
            if(s[i]=='g') {
                ans = max(ans, i-j);
                for(i; i<s.size(); i++) {
                    if(s[i]==c) {j = i;break;}
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
