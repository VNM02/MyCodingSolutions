#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll n;
	cin>>n;
	if(n==1)
	{
		cout<<"9\n";
	}
	else if(n==2)
	{
		cout<<"98\n";
	}
	else if(n==2)
	{
		cout<<"989\n";
	}
	else
	{
		cout<<989;
		 n -= 3;
        int i = 0;
        while (n--)
        {
            cout << i % 10;
            i++;
        }
		cout<<"\n";
	}
	
}
return 0;
}