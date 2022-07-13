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
	bool check=true;
	while(s.length()>1)
	{
		if(s.length()==2)
		{
			if(s[0]!=s[1])
			{
				check=false;
				
			}
			break;
		}
		else if(s.length()%2==0 && s.length()>2)
		  {
			string s1=s.substr(0,s.length()/2),s2=s.substr(s.length()/2,s.length()/2);
			if(s1==s2)
		    {
				s=s.substr(0,s.length()/2);
				
			}
			else
			{
				check=false;
				break;
			}
		  }
		  else
		  {
			s.pop_back();
		  }
	}

	if(check==true)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}
return 0;
}
