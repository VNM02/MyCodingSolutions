#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(abs(a-1)<abs(c-b)+abs(c-1) )
	{
		cout<<1<<"\n";
	}
	else if(abs(a-1)>abs(c-b)+abs(c-1) )
	{
		cout<<2<<"\n";
	}
	else
	{
		cout<<3<<"\n";
	}
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
