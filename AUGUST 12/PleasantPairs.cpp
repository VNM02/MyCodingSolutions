#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int k=0;k<t;k++)
{
	ll n;
	cin>>n;
	ll arr[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=arr[i]-i;j<=n;j+=arr[i])
		{
			if(j>=0)
			if((i+j)==(arr[i]*arr[j]) && i<j)
			{
				ans++;
			}
		}
	}
	cout<<ans<<"\n";
}
return 0;
}
