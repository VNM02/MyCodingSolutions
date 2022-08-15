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
	string s;
	cin>>s;
	string p;
	p=s;
	sort(s.begin(),s.end());
	vector<int > vec;
	for(int i=0;i<n;i++)
	{
		if(s[i]!=p[i])

		{
			vec.push_back(i+1);
		}
	}
	if(vec.size()==0)
	{
		cout<<0<<"\n";
	}
	else
	{
		cout<<1<<"\n";
		cout<<vec.size()<<" ";
		for(int i=0;i<vec.size();i++)
		{
			cout<<vec[i]<<" ";
		}
		cout<<"\n";
	}
}
return 0;
}