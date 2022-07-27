#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n,k,ans=0;
	cin>>n>>k;

	if(n==k)
	{
		ans=1;
	}
	else if(n<k)
	{
       if(k%n==0)
	   {
		ans=k/n;
	   }
	   else
	   {
		ans=(k/n)+1;
	   }
	}
	else
	{
		if(n%k==0)
		{
			ans=1;
		}
		else
		{
			ans=2;
		}
	}
	cout<<ans<<"\n";
}
return 0;
}
