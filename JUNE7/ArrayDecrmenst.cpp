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
	ll brr[n];
    ll c=0;
	ll ma=0;
	ll p=0;
	for(ll i=0;i<n;i++)
	{
		
		cin>>arr[i];	
		if(arr[i]>ma)
		{
			ma=max(ma,arr[i]);
			p=i;
		}	
	}
	for(ll i=0;i<n;i++)
	{
		cin>>brr[i];
	}
	if(brr[p]>ma)
	{
		cout<<"NO"<<"\n";
	}
	else
	{
	ll d=ma-brr[p];
	for(int i=0;i<n;i++){
		if(d>arr[i])
		{
			arr[i]=0;
		}
		else
		{
			arr[i]-=d;
		}
	}
  
  for(ll i=0;i<n;i++)
  {
	  if(arr[i]==brr[i])
	  {
		  c++;
	  }
  }
  if(c==n)
  {
	  cout<<"YES"<<"\n";
  }
  else
  {
	  cout<<"NO"<<"\n";
  }
	}


}
return 0;
}