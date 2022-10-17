#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  t, n;
    cin >> t;
    for(int i = 0 ; i < t; ++i){
        cin >> n;
        long long sum = 0,  s = 0;
        while(n >= 10){
            sum = n/10;
            n = n % 10 + sum;
            sum*=10;
            s += sum;
        }
        s += n;
        cout<< s << endl;
    }
    return 0;
}
