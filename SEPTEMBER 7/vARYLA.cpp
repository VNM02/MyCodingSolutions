
#include <iostream>
#include <string>
using namespace std;
int main() {
	int n, d, h, tall = 0;
	cin >> n >> d;
	for (int i = 1; i <= n; i++) {
		cin >> h;
		if (h > d)
	        tall += 1;
		tall += 1;
	}
	cout << tall;
}
