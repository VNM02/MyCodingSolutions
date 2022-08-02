#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	ll n;
	cin>>n;
	vector<ll> vec;
	map<ll,ll> map;
	ll ans=0;
	for(int i=0;i<n;i++)
	{
		ll e;
		cin>>e;
		vec.push_back(e-i);
		map[e-i]++;
	}
	for(auto i:map)
	{
		if(i.second>1)
		{
			ans+=((i.second-1)*(i.second))/2;
		}
	}
	cout<<ans<<"\n";
}
return 0;
}