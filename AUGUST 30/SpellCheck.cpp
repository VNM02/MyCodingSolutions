#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	
	if(s.length()!=5)
	{
		cout<<"NO\n";
		return ;
	}
	map<char,int> mp;
	mp.insert({'T',1});
	mp.insert({'i',1});
	mp.insert({'m',1});
	mp.insert({'u',1});
	mp.insert({'r',1});
	
	for(int i=0;i<s.length();i++)
	{

		if(mp.find(s[i])!=mp.end() && mp[s[i]]>0)
		{
			mp[s[i]]--;
		}
		else
		{
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
	return;
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