#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, c = 0;
    cin >> n;
    long long p=(n-1)/2;
    long long s=2*p-n;
    long long r=n+1;

    if (n % 2 == 0)
    {
        cout << n / 2;
    }
    else
    { long long p=(n-1)/2;
    long long s=2*p-n;
    long long r=n+1;

        cout <<(r*s)/2;
    }

    return 0;
}
