#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n,k;
	cin>>n>>k;
	int m=n*k;
	vector<int> vec(m);
	for(int i=0;i<m;i++)
	{
		cin>>vec[i];
	}
	ll ans=0;
   if(n==2)
   {
	for(int i=0;i<m;i+=2)
	{
		ans+=vec[i];
	}
	
   }
   else
   {
	int interval=(n+1)/2;
	if(n%2==0)
	{
		interval++;
	}
	int c=0;
	for(int i=m-interval;i>=0;i-=interval)
	{
		if(c<k)
		{
			c++;
			ans+=vec[i];
		}
		else
		{
			break;
		}
	}
   }
   cout<<ans<<"\n";
}
return 0;
}
