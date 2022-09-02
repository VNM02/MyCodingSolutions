#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	int n;
	cin>>n;
	ll ans=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			// int l=__lcm(i,j);
			int g=__gcd(i,j);
			int l=(i*j)/g;
			if(((l)/g)<=3)
			{
				ans++;
			}
		}
	}
	cout<<ans<<"\n";
}
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++)
{
	solve();
}

return 0;
}