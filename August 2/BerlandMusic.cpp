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
	int p[n];
	int q[n];
	vector<int> ze,on;
	map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		q[i]=p[i];
		mp[p[i]]=i;
	}
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
		{
			ze.push_back(p[i]);
		}
		else
		{
			on.push_back(p[i]);
		}
	}
		sort(ze.begin(),ze.end());
		sort(on.begin(),on.end());
		sort(p,p+n);
		reverse(ze.begin(),ze.end());
		reverse(on.begin(),on.end());
		reverse(p,p+n);
		int i=0;
		for(i=0;i<on.size();i++)
		{
			   q[mp[on[i]]]=p[i];
		}
		for(int k=0;k<ze.size();k++)
		{
			q[mp[ze[k]]]=p[i];
			i++;
		}
		for(int i=0;i<n;i++)
		{
			cout<<q[i]<<" ";
		}
		cout<<"\n";

	
}
return 0;
}
