#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	string s;
	cin>>s;
	int n=s.length();
	 if (n % 2 == 0 && s[0] != ')' && s[n-1] != '(')
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
