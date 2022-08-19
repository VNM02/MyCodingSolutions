#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n,c0=0,c1=0,c2=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]%3==0)
		{
			c0++;
		}
		else if(arr[i]%3==1)
		{
			c1++;
		}
		else
		{
			c2++;
		}
	}
	int avg=n/3,ans=0;
	if(c0<avg)
	{
		if(c2>avg)
		{
			ans+=max(0,min(avg-c0,c2-avg));
			c2-=max(0,min(avg-c0,c2-avg));
			c0+=max(0,min(avg-c0,c2-avg));
		}
		if(c1>avg && c0<avg)
		{
			ans+=2*max(0,min(c1-avg,avg-c0));
			c1-=max(0,min(c1-avg,avg-c0));
			c0+=max(0,min(c1-avg,avg-c0));
		}
		
	}
	 if(c1<avg)
	{
		if(c0>avg)
		{
			ans+=max(0,min(c0-avg,avg-c1));
			c0-=max(0,min(c0-avg,avg-c1));
			c1+=max(0,min(c0-avg,avg-c1));
		}
		if(c2>avg && c1<avg)
		{
			ans+=2*max(0,min(c2-avg,avg-c1));
			c2-=max(0,min(c2-avg,avg-c1));
			c1+=max(0,min(c2-avg,avg-c1));
		}
		
	}
	if(c2<avg)
	{
		if(c1>avg)
		{
			ans+=max(0,min(c1-avg,avg-c2));
			c1-=max(0,min(c1-avg,avg-c2));
			c2+=max(0,min(c1-avg,avg-c2));
		}
		if(c0>avg && c2<avg)
		{
			ans+=2*max(0,min(c0-avg,avg-c2));
			c0-=max(0,min(c0-avg,avg-c2));
			c2+=max(0,min(c0-avg,avg-c2));
		}
		
		
	}
	//cout<<c0<<" "<<c1<<" "<<c2<<" "<<ans<<"\n";
	cout<<ans<<"\n";
}
return 0;
}
