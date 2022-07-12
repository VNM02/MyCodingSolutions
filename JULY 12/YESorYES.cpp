#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(int j=0;j<t;j++)
{
	string s;
	cin>>s;
	if(s=="YES" || s=="YEs" || s=="YeS" || s=="yES" || s=="Yes" || s=="yEs" || s=="yeS" || s=="yes")
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
