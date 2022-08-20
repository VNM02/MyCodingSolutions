#include <bits/stdc++.h>
typedef long long ll ;

using namespace std ;
 bool solve(ll n)
 {
	vector<ll> v(n,0);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	vector<ll> pref(n,0);
	pref[0]=v[0];
	for(int i=1;i<n;i++)
	{
		pref[i]=pref[i-1]+v[i];
	}
	if(pref[n-1]!=0)
	{
		return false;
	}
	for(ll i=0;i<n;i++)
	{
		if(pref[i]<0)
		{
			return false;
		}
	}
	for(ll i=0;i<n;i++)
	{
		if(pref[i]==0)
		{
			for(ll p=i;p<n;p++)
			{
				if(pref[p]!=0)
				{
					return false;
				}
			}
			break;
		}
	}
	return true;
 }
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	ll n;
	cin>>n;
	bool ans=solve(n);
	if(ans==true)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}
return 0;
}