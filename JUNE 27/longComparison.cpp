#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
ll binaryIter(ll a,ll b)
{
	int m=1e9+7;
	ll ans=1;
	while(b>0)
	{
		if(b&1)
		{
			ans=(ans*a)%(m);
		}
		a=(a*a)%(m);
		b=b>>1;
	}
	return ans;

}
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll x1,p1;
	ll x2,p2;
	
	cin>>x1>>p1>>x2>>p2;
	ll m=min(p1,p2);
	ll n1=x1*binaryIter(10,p1-m);
	ll n2=x2*binaryIter(10,p2-m);
	if(n1>n2)
	{
		cout<<">\n";
	}
	else if(n1<n2)
	{
		cout<<"<\n";
	}
	else
	{
		cout<<"=\n";
	}
	
}
return 0;
}
