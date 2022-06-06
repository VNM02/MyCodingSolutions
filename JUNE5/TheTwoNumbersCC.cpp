#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
ll gcd(ll a,ll b)
{ 
	if(a%b==0)
	{
		return b;
	}
	return gcd(b,a%b);
}
int main(){
ll t;
cin>>t;
ll m=1e9+7;
for(ll j=0;j<t;j++)
{
	ll k,ans;
	cin>>k;
	if(k%2!=0)
	{
		
		
		ll l=(k/2)*((k/2)+1);
		 ans=l-1;
	}
	else
	{
		if((k/2)%2==0)
		{
			
		ll l=((k/2)-1)*((k/2)+1);
		ll a1=l-1;
		ll a2=k-2;
		ans=max(a1,a2);
		}
		else
		{
			
			ll l=((k/2)-2)*((k/2)+2);
			ll a1=l-1;
			ll a2=k-2;
			ans=max(a1,a2);
		}
		
		
	}
	cout<<ans<<"\n";
}
return 0;
}