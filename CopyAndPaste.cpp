#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n,m;
	cin>>n>>m;
	string s;
	cin>>s;
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
	if(c1==0)
	{
		cout<<c0<<"\n";
	}
	else if(c0==0)
	{
		if(n%2==0 || m%2==0)
		{
			cout<<"1\n";
		}
		else {
			cout<<"0\n";
		}
		
	}
	else 
	{
		if(c1%2==0)
		{
			cout<<
		}
		if(c1)
	}
}
return 0;
}