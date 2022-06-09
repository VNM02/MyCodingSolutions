#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll a,b,ans=0;
	cin>>a>>b;
	if(a%3==0 || b%3==0)
	{
		ans=0;
	}
	else
	{
		if(a%3!=b%3)
		{
			ans=2;
		}
		else
		{
			ans=1;
		}
	
	}
	cout<<ans<<"\n";
}
return 0;
}