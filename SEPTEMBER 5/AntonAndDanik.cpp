#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int cntA = 0, cntD = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'A')
		{
			cntA++;
		}
		if (s[i] == 'D')
		{
			cntD++;
		}
	}
	// cout << cntA << " " << cntD << " ";
	if (cntA > cntD)
	{
		cout << "Anton" << endl;
	}
	else if (cntA < cntD)
	{
		cout << "Danik" << endl;
	}
	else
	{
		cout << "Friendship" << endl;
	}
	return 0;
}
