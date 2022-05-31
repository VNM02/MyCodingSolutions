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
	ll arr[n];
	if(n%2!=0)
	{ 
		
			arr[0]=3;
			arr[2]=2;
			arr[1]=1;
			if(n>3)
			{
                 for(ll i=3;i<n;i+=2)
		{
			arr[i]=i+2;
			arr[i+1]=i+1;
		}
			}
       
		
	   
	}
	else
	{
		for(ll i=0;i<n;i+=2)
		{
			arr[i]=i+2;
			arr[i+1]=i+1;
		}
	}
	for(ll i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
return 0;
}