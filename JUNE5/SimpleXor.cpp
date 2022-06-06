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
	ll a=0,b=0,c=0,d=0;
	bool check=false;
	for(int i=l;i<=r-3;i++)
	{
		
			if((i^(i+1)^(i+2)^(i+3))==0)
			{
			a=i;
			b=i+1;
			c=i+2;
			d=i+3;
			check=true;
			break;
			}
			
		
	}
	if(check==true)
	{
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
	}
	else
	{
		cout<<"-1"<<"\n";
	}
}
return 0;
}