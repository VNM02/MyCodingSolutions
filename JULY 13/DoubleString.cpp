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
	string arr[n];
	map<string,bool> mp;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		mp[arr[i]]=true;
	}
	bool bit=0;
	for(int i=0;i<n;i++)
	{
		bit=0;
		for(int j=1;j<arr[i].length();j++)
		{
			string st=arr[i].substr(0,j);
			string ed=arr[i].substr(j,arr[i].length()-j);
			if(mp[st]==true && mp[ed]==true)
			{
				bit=1;
				break;
			}
		}
		cout<<bit;
	}
	cout<<"\n";
}
return 0;
}