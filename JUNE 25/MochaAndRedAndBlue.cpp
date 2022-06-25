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
	char arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    ll i=0;
	while(arr[i]=='?')
	{
         if(arr[i]!='?')
		 {
			break;
		 }
		 else
		 {
			i++;
		 }
	}
	if(i!=0 && i!=n-1)
	{
		for(int p=i;p>0;p--)
		{
			if(arr[p-1]=='?')
			{
				if(arr[p]=='R')
				{
					arr[p-1]='B';
				}
				else
				{
					arr[p-1]='R';
				}
			}
		}
		for(int p=i+1;p<n;p++)
	   {
		if(arr[p]=='?')
		{
			if(arr[p-1]=='R')
			{
				arr[p]='B';
			}
			else
			{
				arr[p]='R';
			}
		}
	   }
	}
	else if(i==0)
	{
		for(int p=1;p<n;p++)
		{
			if(arr[p]=='?')
			{
				if(arr[p-1]=='R')
				{
					arr[p]='B';
				}
				else
				{
					arr[p]='R';
				}
			}
		}
	}
	else
	{
		for(int p=n-2;p>=0;p--)
		{
			if(arr[p]=='?')
			{
				if(arr[p+1]=='R')
				{
					arr[p]='B';
				}
				else
				{
					arr[p]='R';
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	cout<<"\n";
}
return 0;
}
