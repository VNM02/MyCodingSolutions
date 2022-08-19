#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n,m;
	cin>>n;
	vector<int> red(n,0);
	for(int i=0;i<n;i++)
	{
		cin>>red[i];
	}
	cin>>m;
	vector<int> blue(m,0);
	for(int i=0;i<m;i++)
	{
		cin>>blue[i];
		//cout<<blue[i]<<" ";
	}
	// vector<int> ans;
	// for(int i=0;i<max(n,m);i++)
	// {
	// 	if(i<n && i<m)
	// 	{
	// 		ans.push_back(max(red[i],blue[i]));
	// 		ans.push_back(min(red[i],blue[i]));
	// 	}
	// 	else if(i<m && i>=n)
	// 	{
	// 		ans.push_back(blue[i]);
	// 	}
	// 	else if(i<n && i>=m) {
	// 		ans.push_back(red[i]);
	// 	}
		
	// }
	int maxsumred=0,maxsumblue=0;
	int cursumred=0,cursumblue=0;
	for(int i=0;i<n;i++)
	{
		//cout<<ans[i]<<" ";
		cursumred+=red[i];
		maxsumred=max(maxsumred,cursumred);
		
	}
	for(int i=0;i<m;i++)
	{
		//cout<<ans[i]<<" ";
		cursumblue+=blue[i];
		maxsumblue=max(maxsumblue,cursumblue);
		
	}
	cout<<max(0,maxsumblue+maxsumred)<<"\n";
}
return 0;
}