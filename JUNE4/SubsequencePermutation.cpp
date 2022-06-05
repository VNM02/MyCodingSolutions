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
	string s;
	cin>>s;
	char p[n];
	s.copy(p,n);
	sort( p, p+n);
	ll c=0;
	for(int i=0;i<n;i++)
	{
		if(p[i]!=s[i])
		{
			c++;
		}
	}
	cout<<c<<"\n";
}
return 0;
}