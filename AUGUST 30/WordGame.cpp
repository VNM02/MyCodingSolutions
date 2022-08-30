#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	int n,a=0,b=0,c=0;
	cin>>n;
	map<string,int> mp;
	vector<string> vec;
	for(int i=0;i<3*n;i++)
	{
		string s;
		cin>>s;
		mp[s]++;
		vec.push_back(s);
	}

	for(int i=0;i<n;i++)
	{
		if(mp[vec[i]]==1)
		{
			a+=3;
		}
		if(mp[vec[i]]==2)
		{
			a+=1;
		}
	}
	for(int i=n;i<2*n;i++)
	{
		if(mp[vec[i]]==1)
		{
			b+=3;
		}
		if(mp[vec[i]]==2)
		{
			b+=1;
		}
	}
	for(int i=2*n;i<3*n;i++)
	{
		if(mp[vec[i]]==1)
		{
			c+=3;
		}
		if(mp[vec[i]]==2)
		{
			c+=1;
		}
	}
	cout<<a<<" "<<b<<" "<<c<<"\n";
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