#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n,x;
	cin>>n>>x;
	int ma=(n*(n+1))/2;
	if(x<=ma && x>=n )
	{
		vector<int> vec;
		int di=x-n;
		for(int i=di;i<n;i++)
		{
			vec.push_back(i+1);
		}
		int p=0;
		for(int i=0;i<di;i++)
		{
			vec.push_back(i+1);
		}
		for(int i=0;i<n;i++)
		
		{

			cout<<vec[i]<<" ";
		}
		cout<<"\n";
	}
	else
	{
		cout<<"-1\n";
	}
}
return 0;
}