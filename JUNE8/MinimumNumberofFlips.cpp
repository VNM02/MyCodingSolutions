#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll n,cp=0,cn=0,ans=0;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==1)
		{
			cp++;
		}
		else
		{
			cn++;
		}
	}
	if(n%2==0)
	{
		if(cp==cn)
		{
			ans=0;
		}
		else
		{
			ans=(max(cp,cn)-min(cp,cn))/2;
		}
	}
	else
	{
		ans=-1;
	}
	
		cout<<ans<<"\n";
	
}
return 0;
}