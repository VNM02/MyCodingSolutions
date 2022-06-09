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
  ll ans=0;
if(n<=2)
{
	ans=1;
}
else
{
	for(int i=1;i<s.length();i++)
	{
		if(s[i-1]=='0' && s[i]=='1')
		{
			ans++;
		}
	}
	if(s[0]=='1')
{
	ans++;
}
if(s[s.length()-1]=='0')
{
	ans++;
}
}
  cout<<ans<<"\n";
}
return 0;
}