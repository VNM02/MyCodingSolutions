#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	int n;
	cin>>n;
	int arr[n];
	ll c1=0,c0=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==0)
		{
			c0++;
		}
		if(arr[i]==1)
		{
			c1++;
		}	
    }
	ll ans=c1*pow(2,c0);
	cout<<ans<<"\n";


}
return 0;
}
