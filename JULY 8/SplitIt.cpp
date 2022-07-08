#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll n,k;
	cin>>n>>k;
	bool c=true;
	string s;
	cin>>s;
	for(int i=0;i<k;i++)
	{
		if(s[i]!=s[n-i-1] || s.length()<=2*k)
		{
			c=false;
		}
	}
	if(c==true)
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