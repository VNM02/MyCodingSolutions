#include <bits/stdc++.h>
typedef long  ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll n;
	cin>>n;
	ll arr[n];
	vector< pair<ll,ll> > vec;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]<i+1)
		{
              vec.push_back(make_pair(arr[i],i+1));
		}
	}
	int c=0;
	for(int i=0;i<vec.size()-1;i++)
	{
		for(int k=i+1;k<vec.size();k++)
		{
			if(vec[i].second<vec[k].first)
			{
				c++;
			}
		}
	}
	cout<<c<<"\n";
}
return 0;
}