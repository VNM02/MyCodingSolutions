#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll l,r,k,c=0;
	cin>>l>>r>>k;
	if(l==r && l!=1)
	{
		cout<<"YES"<<"\n";
	}
	else if(l==r && l==1)
	{
		cout<<"NO"<<"\n";
	}
 
	else
	{
		if((r-l+1)%2==0)
		{
			c=(r-l+1)/2;
		}
		else if(l%2==0)
		{
			c=(r-l+1)/2;
		}
		else
		{
			c=((r-l+1)/2)+1;
		}
		if(c<=k)
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