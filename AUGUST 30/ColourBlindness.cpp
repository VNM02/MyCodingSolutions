#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<n;i++)
	{
		if(s1[i]=='B')
		{
			s1[i]='G';
		}
		if(s2[i]=='B')
		{
			s2[i]='G';
		}
	}
	//cout<<s1<<" "<<s2<<"\n";
	if(s1==s2)
	{
		
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++)
{
	solve();
}
return 0;
}
