#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	ll w,h;
	cin>>w>>h;
	ll k1=0,k2=0,k3=0,k4=0;
	cin>>k1;
	ll arr1[k1];
	for(int i=0;i<k1;i++)
	{
		cin>>arr1[i];
	}
	cin>>k2;
	ll arr2[k2];
	for(int i=0;i<k2;i++)
	{
		cin>>arr2[i];
	}
	cin>>k3;
	ll arr3[k3];
	for(int i=0;i<k3;i++)
	{
		cin>>arr3[i];
	}
	cin>>k4;
	ll arr4[k4];
	for(int i=0;i<k4;i++)
	{
		cin>>arr4[i];
	}
	ll a1,a2;
	ll d1=0,d2=0;
	d1=abs(arr1[k1-1]-arr1[0]);
	d2=abs(arr2[k2-1]-arr2[0]);
	a1=max(d1,d2)*h;
	ll d3=0,d4=0;
	d3=abs(arr3[k3-1]-arr3[0]);
	d4=abs(arr4[k4-1]-arr4[0]);
	a2=max(d3,d4)*w;
	cout<<max(a1,a2)<<"\n";
}
return 0;
}