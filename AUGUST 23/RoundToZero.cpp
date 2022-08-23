#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	ll x,y,a,b;
	cin>>x>>y>>a>>b;
	cout<<min((a*(max(x,y)-min(x,y))+b*(min(x,y))),a*x+a*y)<<"\n";
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