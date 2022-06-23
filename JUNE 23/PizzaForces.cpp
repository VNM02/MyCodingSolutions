#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll n,sum=0;
	cin>>n;
	if(n<6)
	{
     sum=15;
	}
	else
	{
		sum=(n/6)*15;
		if(n%6==1 || n%6==2)
		{
			sum=sum-15+20;
		}
		else if(n%6>2 && n%6<5)
		{
			sum=sum-15+25;
		}
		else if(n%6==5)
		{
			sum+=15;
		}
	}
	cout<<sum<<"\n";
}
return 0;
}
