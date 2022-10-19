#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, i, c=0;
    string a, b;
    cin >> n >> a >> b;
    for (i=0; i<n; i++)
    {
        c = c + min(10 - abs(a[i] - b[i]), abs(a[i] - b[i]));
    }

    cout << c << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    int t;
//    cin>>t;
//    while(t--)
    {
        solve();

    }
    return 0;
}

