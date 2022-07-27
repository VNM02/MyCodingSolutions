#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n,a,b;
	cin>>n>>a>>b;
	string s;
	cin>>s;
	int c=1;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]!=s[i+1])
		{
			c++;
		}
		else
		{
			continue;
		}
	}
	int ans=0;
	if(b>=0)
	{
		ans=(a+b)*n;
	}
	else
	{
		
		 ans=a*n+b*((c/2)+1);

	}
	cout<<ans<<"\n";

}
return 0;
}
