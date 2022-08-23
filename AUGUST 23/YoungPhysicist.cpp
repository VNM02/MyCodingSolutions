#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	int n;
	cin>>n;
	ll xsum=0,ysum=0,zsum=0;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		int b;
		cin>>b;
		int c;
		cin>>c;
		xsum+=a;
		ysum+=b;
		zsum+=c;
	}
	if(xsum==0 && ysum==0 && zsum==0)
	
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}
int main(){

	solve();

return 0;
}