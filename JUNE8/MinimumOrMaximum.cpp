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
ll mn=arr[0];
ll ma=arr[0];
for(ll i=0;i<n;i++)
{
	if(arr[i]>ma)
	{
		ma=arr[i];
	}
	if(arr[i]<mn)
	{
		mn=arr[i];
	}
	if(arr[i]<mn && arr[i]>ma)
	{
		cout<<"NO"<<"\n";
		return 0;
	}
}
cout<<"YES"<<"\n";
}
return 0;
}