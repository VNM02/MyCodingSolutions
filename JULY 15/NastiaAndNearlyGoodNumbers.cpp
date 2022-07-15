#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	ll a,b;
	cin>>a>>b;
	if(b==1)
	{
		cout<<"NO\n";
	}
	else
	{
        ll x,y,z;
		z=a*b;
		x=a*(b-1);
		y=a;
		cout<<"YES\n";
		if(x==y)
		{
			z=z*2;
			x+=a*2;
		}
		
		
		cout<<x<<" "<<y<<" "<<z<<"\n";
	}
		
	
}
return 0;
}
