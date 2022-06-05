#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	ll m=arr[0],p=arr[0];
	for(ll i=0;i<n;i++)
	{
		if(arr[i]>m)
		{
			m=arr[i];
		}
		if(arr[i]<p)
		{
			p=arr[i];
		}

	}
	//cout<<m<<p<<"\n";
	cout<<m-p<<"\n";
}
return 0;
}