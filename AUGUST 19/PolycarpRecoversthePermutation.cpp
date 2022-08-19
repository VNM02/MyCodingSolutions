#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int p=0;p<t;p++)
{
	int n;
	cin>>n;
	vector<int> vec(n,0);
	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
		//cout<<vec[i]<<" ";
	}
	if(vec[0]!=n && vec[n-1]!=n)
	{
		cout<<"-1\n";
	}
	else
	{
		for(int i=n-1;i>=0;i--)
		{
			cout<<vec[i]<<" ";
		}
		cout<<"\n";
	}
}
return 0;
}