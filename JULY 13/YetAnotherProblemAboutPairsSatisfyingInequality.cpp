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
	ll arr[n];
	map<ll,ll> mp;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
       if(arr[i]<i+1 && mp[arr[i]]==0 )
	   {
		mp[arr[i]]=i+1;
	   }
	}
	//  map<ll, ll>::iterator itr;
	//  for(itr=mp.begin();itr!=mp.end();itr++)
	//  {
	// 	cout<<itr->first<<" "<<itr->second<<"";
	//  }
	//  cout<<"\n";
	int c=0;
	for(ll i=0;i<n-1;i++)
	{
		auto it=mp.find(arr[i]);
		if(it!=mp.end())
		{
			if(arr[i]<mp[arr[i]])
			{
                  for(ll k=0;k<mp.size();k++)
				{
					auto ip=mp.find(arr[k]);
					if(arr[k]<mp[arr[k]])
					{
                         if(ip!=mp.end())
					{
						
							if(arr[i]<mp[arr[i]] && mp[arr[i]]<arr[k] && arr[k]<mp[arr[k]])
							{
								c++;
							}
						
					}
					}
					
				
				}
			}
				
		}
	}
	cout<<c<<"\n";
}
return 0;
}