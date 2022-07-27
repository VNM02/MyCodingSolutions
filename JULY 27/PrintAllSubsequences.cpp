#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
string s;
cin>>s;
int n=s.length();
for(int i=0;i<(1<<n);i++)
{
	string s1="";
	for(int j=0;j<n;j++)
	{
		if((i&(1<<j)))
		{
			s1+=s[j];
		}
	}
	cout<<s1<<"\n";
}
return 0;
}