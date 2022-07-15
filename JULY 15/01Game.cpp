#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	string s;
	cin>>s;
	int n=s.length();
	int c1=0,c0=0;
	for(int i=0;i<n;i++)
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
	int p=min(c1,c0);
	if(p%2!=0)
	{
		cout<<"DA\n";
	}
	else
	{
		cout<<"NET\n";
	}
}
return 0;
}