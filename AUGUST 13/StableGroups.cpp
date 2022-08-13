#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){

	ll n,k,x;
	cin>>n>>k>>x;
	vector<ll> vec;
	for(int i=0;i<n;i++)
	{
		ll p;
		cin>>p;
		vec.push_back(p);
	}
	vector<ll> arr;
	sort(vec.begin(),vec.end());
	ll s=1,sum=0;
	for(int i=0;i<n-1 ;i++)
	{
			if((vec[i+1]-vec[i])>x)
			{
				ll p=vec[i+1]-vec[i];
				ll req=(p/x);
				if(p%x==0 )
				{
					req--;
				}
				arr.push_back(req);	
				
				req=0;
			}
	}
	sort(arr.begin(),arr.end());
	s=arr.size()+1;
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]<=k)
		{
			k-=arr[i];
			s--;
		}
		
		else
		{
			break;
		}
	}
	cout<<s<<"\n";

return 0;
}	


// if((vec[i+1]-vec[i]-x)>x)
// 				{
// 					s++;
// 				}
// 				else
// 				{
// 					if(k>0)
// 					{
// 							k--;
// 					}
// 					else
// 					{
// 						s++;
// 					}
					
// 				}