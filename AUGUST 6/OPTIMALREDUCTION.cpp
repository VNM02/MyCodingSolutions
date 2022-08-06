#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n;
	cin>>n;
	int arr[n];
	int c=0,d=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(i>0 && arr[i]>=arr[i-1])
		{
			c+=arr[i]-arr[i-1];
		}
		if(i==0)
		{
			c+=arr[i];
		}
	
	}
		cout<<c<<"\n";
		sort(arr,arr+n);
		for(int i=0;i<n;i++)
	{
		
		if(i>0 && arr[i]>=arr[i-1])
		{
			d+=arr[i]-arr[i-1];
		}
		if(i==0)
		{
			d+=arr[i];
		}
	
	}
		cout<<d<<"\n";
	if(c<=d)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}
return 0;
}
