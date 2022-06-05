#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll a,b,c;
	cin>>a>>b>>c;
	ll tp=abs(a-b)*2;
	if(a<=tp && b<=tp && c<=tp)
	{
		ll p=(tp)-c;
		if(p==c)
		{
			cout<<tp<<"\n";
		}
		else
		{
			ll m=c+abs(a-b);
			ll n=c-abs(a-b);
			if(m<=tp)
			{
				cout<<m<<"\n";
			}
			else if(n<=tp)
			{
				cout<<n<<"\n";
			}
			else
			{
				cout<<"-1"<<"\n";
			}
			
		}
	}
	else
	{
		cout<<"-1"<<"\n";
	}
}
return 0;
}