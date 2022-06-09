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
	ll brr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(ll i=0;i<n;i++)
	{
		cin>>brr[i];
	}
	for(ll i=0;i<n;i++)
	{
		if(brr[i]>arr[i])
		{
			swap(arr[i],brr[i]);
		}
	}
 ll max1=0,max2=0;
 for(ll i=0;i<n;i++)
 {
	 max1=max(arr[i],max1);
	  max2=max(brr[i],max2);
 }
 cout<<max1*max2<<"\n";
}
return 0;
}