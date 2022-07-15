#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n,x;
	cin>>n>>x;
	vector<int> vec;
	for(int i=0;i<2*n;i++)
	{
		int p;
		cin>>p;
         vec.push_back(p);
	}
	bool check=true;
	sort(vec.begin(),vec.end());
	for(int i=0;i<n;i++)
	{
		if((vec[i+n]-vec[i])<x)
		{
			check=false;
			break;
		}
	}
	if(check==true)
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