#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n,b;
	cin>>n>>b;
	string s1,s2;
	cin>>s1>>s2;
	if(b==1 && n>1)
	{
		bool p=false;
		for(int i=0;i<n;i++)
		{
			if(s1[i]==s2[0])
			{
				p=true;
				break;
			}
		}
		if(p==true )
	{
		cout<<"YES\n";
	}
	else
	{
		// cout<<check<<" "<<beck<<"\n";
		cout<<"NO\n";
	}
	}
		else if(n==b)
		{
			if(s1==s2)
			{
				cout<<"YES\n";
			}
			else
			{
				cout<<"NO\n";
			}
		}
	else
	{
		bool check=true;
	int k=1;
	for(int i=n-b+1;i<n;i++)
	{
       if(s1[i]!=s2[k])
	   {
		check=false;
		break;
	   }
	   k++;
	}
	int beck=false;
	for(int i=0;i<n-b-1;i++)
	{
		if(s1[i]==s2[0])
		{
			beck=true;
			break;
		}
	}
	if(check==true && beck==true)
	{
		cout<<"YES\n";
	}
	else
	{
		// cout<<check<<" "<<beck<<"\n";
		cout<<"NO\n";
	}
	}
	
}
return 0;
}
