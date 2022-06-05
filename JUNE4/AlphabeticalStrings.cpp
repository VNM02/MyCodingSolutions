#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	bool c=true;
	string s;
	cin>>s;
	int l=0,r=s.length()-1;
	for(int i=s.length();i>=1;i--)
	{
		if(s[l]-'a'+1==i)
		{
			l++;
		}
		else if(s[r]-'a'+1==i)
		{
			r--;
		}
		else
		{
			c=false;
			break;
		}
	}
	if(c==true)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}

}
return 0;
}