#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    // ll t;
    // cin >> t;
    
    // while (t--) {
        
    // }
    ll n, amount(0);
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        amount += a[i];
    }
    sort(a.begin(), a.end(), greater<ll>());
    
    ll ans(0), sum(0);
    
    for (int i = 0; i < n; i++) {
        sum += a[i];
        ans++;
        if (sum > (amount / 2)) break;
    }
    
    cout << ans << endl;
    
    return 0;
}
