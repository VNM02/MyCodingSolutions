#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	ll ans=0;
	for(int i=0;i<n;i++)
	{
		if(i==0 || s[i]==s[i-1])
		{
			ans++;
		}
		else 
		{
			ans+=i+1;
		}
	}
	cout<<ans<<"\n";
}
return 0;
}
