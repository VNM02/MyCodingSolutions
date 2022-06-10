#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll l,r;
	cin>>l>>r;
	ll p;
	if(r%2==0)
	{
     p=(r/2)+1;
	}
	else
	{
		p=(r+1)/2;
	}
	ll ans=r%p;
	if(p<l)
	{
		ans-=l-p;
	}
	cout<<ans<<"\n";
}
return 0;
}