#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	int ans = n / 3;
	if(n == 1) ans += 1;
	if(n % 3) ans += 1;
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; cin >> t;
	for (int i = 1; i <= t; i++) solve();
}
