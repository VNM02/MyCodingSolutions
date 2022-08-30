#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	int n,c=0;
	cin>>n;
	string s;
	cin>>s;
	vector<int> vec;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='L')
		{
			c+=i;
		}
		else
		{
			c+=n-1-i;
		}
	}
	int prev=c;
	int ma=c;
	for(int i=0;i<n;i++)
	{
		int a=prev;
		if(s[i]=='L')
		{
			a=a-i+n-1-i;
		}
		else
		{
			a=a-n+1+i+i;
		}
		ma=max(ma,a);
		vec.push_back(ma);
		prev=a;
		cout<<vec[i]<<" ";
	}
	cout<<"\n";
}
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	solve();
}
return 0;
}