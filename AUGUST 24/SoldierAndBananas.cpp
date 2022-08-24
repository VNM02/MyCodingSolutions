#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, ans = 0;
    cin >> a >> b >> c;
    for (long long i = 1; i <= c; i++)
    {
        ans += a * i;
    }
    if(ans  >b)
        cout << (ans - b);
    else
        cout<< 0;
 
    return 0;
}
