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
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int p;
		cin>>p;
		vec.push_back(p);
		sum+=p;
	}
	if((sum==0))
	{
		cout<<"NO\n";
	}
	else
	{
		sort(vec.begin(),vec.end());
		int a=vec[n-1];
		int b=vec[0];
		vec[0]=b;
		vec[n-1]=a;
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