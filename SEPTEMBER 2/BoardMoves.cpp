#include <bits/stdc++.h>
typedef  long long ll ;
using namespace std ;
void solve()
{
	ll n;
	cin>>n;
	
	if(n==1)
	{
		cout<<"0\n";
		
	}
	else
	{
		ll p=n/2;
		ll ans=0;
		while(n>1 )
		{
			ans+=(n-1)*p;
			n-=2;
			p--;
		}
		cout<<ans*4<<"\n";
	}
	
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
