#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve(int n)
{
	string s1,s2;
	cin>>s1>>s2;
	bool arr[3];
	vector<int> vec;
		for(int i=0;i<3;i++)
		{
			arr[i]=false;
		}
	for(int i=0;i<n;i++)
	{
		if(s1[i]=='1'|| s2[i]=='1')
		{
			arr[1]=true;
		}
		 if(s1[i]=='0' || s2[i]=='0')
		{
			arr[0]=true;
		}
		 if(s1[i]=='2' || s2[i]=='2')
		{
			arr[2]=true;
		}
		for(int i=0;i<3;i++)
		{
			if(arr[i]==false)
			{
				vec.push_back(i);
				break;
			}
		}
		arr[0]=false,arr[1]=false,arr[2]=false;
	}
int ans=0;
for(int i=0;i<n;i++)
{
	if(vec[i]==2)
	{
		ans+=2;
	}
	else if(vec[i]==1)
	{
		if(i+1<n)
		{
			if(vec[i+1]==0)
			{
				ans+=2;
				i++;
				continue;
			}
			else
			{
				ans++;
			}
		}
		else
		{
			ans++;
		}
	}
	else
	{
		if(i+1<n)
		{
			if(vec[i+1]==1)
			{
				ans+=2;
				i++;
				continue;
			}
		}
	}
}
cout<<ans<<"\n";
}
int main(){
int t;
cin>>t;
for(int p=0;p<t;p++)
{
	int len;
	cin>>len;
	solve(len);
}
return 0;
}