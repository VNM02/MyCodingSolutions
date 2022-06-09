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
	string s;
	cin>>s;
	if(s.length()>2)
	{
		cout<<"NO"<<"\n";
	}
	else if(s.length()==1)
	{
		cout<<"YES"<<'\n';
	}
	else
	{
		ll c1=0,c0=0;
		for(ll i=0;i<s.length();i++)
	{
        if(s[i]=='1')
		{
			c1++;
		}
		else
		{
			c0++;
		}
	}
	if(c1==c0)
	{
		cout<<"YES"<<'\n';
	}
	else
	{
		cout<<"NO"<<'\n';
	}
	}
	
}
return 0;
}