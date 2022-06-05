#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll n,ans=0;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for(ll i=0;i<n-3;i++)
	{
      if(arr[i]!=arr[i+1])
	  {
		  if(arr[i]!=arr[i+2])
		  {
			  ans=i+1;
		  }
		  else
		  {
			  ans=i+2;
		  }
	  }
	}
	if(ans==0)
	{
		if(arr[n-1]!=arr[0])
		{
         ans=n;
		}
		else
		{
			ans=n-2;
		}
	}
	cout<<ans<<"\n";

}
return 0;
}