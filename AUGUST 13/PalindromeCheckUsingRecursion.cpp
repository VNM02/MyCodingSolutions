#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
bool f(int i,int n,string s)
{
	if(i>=n/2)
	{
		return true;
	}
	if(s[i]!=s[n-i-1])
	{
		return false;
	}
   return f(i+1,n,s);
}
int main(){
string s;
cin>>s;
bool c=f(0,s.length(),s);
if(c==true)
{
	cout<<"YES\n";
}
else
{
	cout<<"NO\n";
}
return 0;
}
