#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int p=0;p<t;p++)
{
	int n;
	cin>>n;
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
	int a=0,b=0;
	if(n==1)
	{
		if(s[0]=='0')
		{
			a=1;
			
		}
	}
	else
	{
		if(c0%2==0)
		{
			a=1;
			b=0;
		}
		else
		{
			a=0;
			b=1;
			if(c0==1)
			{
				a=1;
				b=0;
			}
		}
	}
	if(a<b)
	{
		cout<<"ALICE\n";
	}
	else if(b<a)
	{
		cout<<"BOB\n";
	}
	else
	{
		cout<<"DRAW\n";
	}
}
return 0;
}