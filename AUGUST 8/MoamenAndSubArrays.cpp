#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n,k;
	cin>>n>>k;
	int arr[n],brr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		brr[i]=arr[i];
	}
	sort(brr,brr+n);
	int c=0;
	map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		mp[brr[i]]=i;
	}
	for(int i=0;i<n;i++)
	{
		if(i>0 && mp[arr[i]]>0 && brr[mp[arr[i]]-1]==arr[i-1])
		{
			continue;
		}
		else
		{
			c++;
		}
	}
	if(c<=k)
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
