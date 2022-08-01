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
	vector<int> vec;
	int sum=0,c0=0;
	for(int i=0;i<n;i++)
	{
		int p;
		cin>>p;
		vec.push_back(p);
		sum+=p;
		if(p==0)
		{
			c0++;
		}
	}
	if((sum==0))
	{
		cout<<"NO\n";
	}
	else
	{
		if(sum>0)
		{
			sort(vec.begin(),vec.end(), greater<int>());
		}
		else
		{
			sort(vec.begin(),vec.end());
		}
		cout<<"YES\n";
		for(int i=0;i<n;i++)
		{
			
			cout<<vec[i]<<" ";
		}
		cout<<"\n";
	}
}
return 0;
}
