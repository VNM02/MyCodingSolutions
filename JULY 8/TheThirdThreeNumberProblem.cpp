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
	if(n%2==0 && n!=1) 
	{
		cout<<n/2<<" "<<0<<" "<<0<<" "<<"\n";
	}
	else 
	{
		cout<<-1<<"\n";

	}
}
return 0;
}