#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll n;
	cin>>n;
	ll a,b,c;
	a=2,b=3,c=1;
	n-=6;
	ll d=n/3;
	ll r=n%3;
	a+=d;
	b+=d;
	c+=d;
	if(r==1)
	{
		b++;
	}
	if(r==2)
	{
		a++;
		b++;
	}
	cout<<a<<" "<<b<<" "<<c<<" "<<"\n";
}
return 0;
}