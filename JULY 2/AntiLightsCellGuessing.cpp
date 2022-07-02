#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll xi,yi,ans=0;
	cin>>xi>>yi;
	if(xi==1 && yi==1)
	{
     ans=0;
	}
	else if(xi==1 || yi==1)
	{
		ans=1;
	}
	else
	{
		ans=2;
	}
	cout<<ans<<"\n";
}
return 0;
}