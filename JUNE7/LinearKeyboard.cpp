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
	string p;
	cin>>p;
	int ans=0,c=0,prev=0;
	int arr[p.length()];
	for(int i=0;i<p.length();i++)
	{
		char ch=p[i];
		for(int j=0;j<s.length();j++)
		{
			if(ch==s[j])
			{
				arr[i]=j;
			}
			
		}
	}
for(int i=1;i<p.length();i++)
{
	ans+=abs(arr[i]-arr[i-1]);
}
	cout<<ans<<"\n";
}
return 0;
}