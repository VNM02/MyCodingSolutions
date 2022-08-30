#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	string s1,s2,s="";
	cin>>s1;
	cin>>s2;
	s+=s1+s2;
	int p=0,c1=0,c2=0;
	sort(s.begin(),s.end());
	vector<int> vec;
	for(int i=0;i<4;i++)
	{
		vec.push_back(0);
	}
	vec[p]++;
	for(int j=1;j<4;j++)
	{
		if(s[j]==s[j-1])
		{
			vec[p]++;
		}
		else
		{
			p++;
			vec[p]++;
		}
	}
	for(int i=0;i<4;i++)
	{
		//cout<<vec[i]<<"\n";
		if(vec[i]==1)
		{
			c1++;
		}
		if(vec[i]==2 || vec[i]==3)
		{
			c2+=2;
		}
		if(vec[i]==4)
		{
			cout<<"0\n";
			return ;
		}
	}
	///cout<<s<<" "<<c1<<" "<<c2<<" \n";	
	cout<<c1+(c2/2)-1<<"\n";
}
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++)
{
	solve();
}
return 0;
}