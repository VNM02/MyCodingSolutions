#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(int i=0;i<t;i++)
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll c=0;
	for(int j=0;j<n-1;j++)
	{
		if(s[j]=='1' && s[j+1]=='0')
		{
			c++;
		}
	}
	cout<<c<<"\n";
}
return 0;
}
