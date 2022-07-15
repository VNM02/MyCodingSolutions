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
	int c=0;
	for(int i=0;i<n;i++)
	{
		int p;
		cin>>p;
		vec.push_back(p);
		c+=p;
	}
	if(vec.back()==c)
	{
		cout<<"0\n";
	}
	else
	{
		ll c0=0;
		ll sum=0;
		bool check=false;
		for(int i=0;i<n-1;i++)
		{
			sum+=vec[i];
			if(vec[i]>0)
			{
				check=true;
			}

			if(vec[i]==0 && check==true)
			{
				c0++;
			}
		}
		ll ans=sum+c0;
		cout<<ans<<"\n";
	}
}
return 0;
}