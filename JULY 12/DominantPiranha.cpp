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
	int m=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		m=max(m,arr[i]);
	}
	int p=0,c=0;
	for(int i=0;i<n-1;i++)
	{
        if(arr[i]==m && arr[i+1]!=m)
		{
			p=i;
		}
		if(arr[i]==m)	
		{
			c++;
		}
	}
	if(arr[p]!=m)
	{
        for(int i=0;i<n;i++)
	{
		if(arr[i]==m)
		{
			p=i;
			break;
		}
	}
	}
	
	if(arr[n-1]==m)
	{
		c++;
	}
	if(arr[n-1]==m &&  c==1)
	{
		p=n-1;
	}
	if(c==n)
	{
		cout<<-1<<"\n";
	}
	else
	{
		cout<<p+1<<"\n";
	}
}
return 0;
}