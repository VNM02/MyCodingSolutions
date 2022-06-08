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
	ll p;

	
		
      if(ma%mi==0)
	{
		p=ma/mi;
	}
	else
	{
		p=(ma/mi)+1;
	}
	
	if(abs(p-1)<=d)
	{
		check=true;
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