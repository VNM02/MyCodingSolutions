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
	ll s[n];
	ll f[n];
	ll d[n];
	for(ll i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(ll i=0;i<n;i++)
	{
		cin>>f[i];
	}
	ll p=0;
	for(ll i=0;i<n;i++)
	{
		if(s[i]>p)
		{
			p=f[i];
			d[i]=f[i]-s[i];
		}
		else
		{
			d[i]=f[i]-p;
			p=f[i];
		}
	}
	for(ll i=0;i<n;i++)
	{
		cout<<d[i]<<" ";
	}
	cout<<"\n";

}
return 0;
}