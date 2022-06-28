#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	int n;
	cin>>n;
	int a=0,b=0,c=0;
	    a=1;
		b=((n-1)/2);
		
		c=n-b-a;
		
	while(c>=0 )
	{
		if(__gcd(b,c)==1)
		{
			break;
		}
		else
		{
             b++;
		     c--;
		}
				
	}
	cout<<b<<" "<<c<<" "<<a;
	cout<<"\n";
}
return 0;
}
