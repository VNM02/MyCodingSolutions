#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll r,b,d;
	cin>>r>>b>>d;
	ll mi=min(r,b);
	ll ma=max(r,b);
	bool check=false;
	if(d==0)
	{
		if(r==b)
		{
			check=true;
		}
	}
	else
	{
      if(ma%2==0)
	{
		ll p=ma/mi;
		if(abs(p-1)<=d)
		{
			check=true;
		}
	}
	else
	{
		ll p=(ma/mi)+1;
		if(abs(p-1)<=d)
		{
			check=true;
		}
	}
	}
	
	if(check==true)
	{
		cout<<"YES"<<"\n";
	}
	else
	{
		cout<<"NO"<<"\n";
	}
}
return 0;
}