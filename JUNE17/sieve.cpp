#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(int j=0;j<t;j++)
{
	ll n,m=0,k;
	cin>>n>>k;
	ll arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	 for(int i=0;i<=n-k;i++)
	 {
		m=arr[i];
		for(int j=1;j<k;j++)
		{
			if(arr[i+j]>m)
			{
				m=arr[i+j];
			}
		}
		cout<<m<<"\n";
	 }
}
return 0;
}
