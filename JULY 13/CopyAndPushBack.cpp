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
	
	if(n%2==0)
	{
		if(n==2)
		{
			if(s[0]!=s[1])
			{
              
			cout<<"NO\n";
			}
               else
			   {
                   cout<<"YES\n";
			   }
		}
		else 
		{
			bool check=true;
			int c=0;
			for(int i=0;i<(n/2)-1;i++)
			{
				if(s[i]!=s[i+1])
				{
					c++;
				}
			}
			string s1=s.substr(0,n/2),s2=s.substr(n/2,n/2);
			if(s1==s2)
			{
				if(c<2)
				{
					cout<<"YES\n";
				}
				else
				{
cout<<"NO\n";
				}

			}
			
		}

		
	}
}
return 0;
}