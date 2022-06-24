#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	int n;
	cin>>n;
if(n%2020==0 || n%2021==0)
{
	cout<<"YES\n";
}
else if(n<2020)
{
	cout<<"NO\n";
}
else
{
	int p=n%10;
	n=n-p*2021;
	
	if(n%2020==0 && n>=0)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}


}
return 0;
}
