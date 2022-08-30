#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	int n,m,sx,sy,d;
	cin>>n>>m>>sx>>sy>>d;
	if(abs(sx-n)<=d && abs(sy-m)<=d)
	{
		cout<<"-1\n";
		//cout<<sx-n<<" "<<abs(sx-n)<<"\n";
		return ;
	}
	else
	{
		
		// for(int i=2;i<=m;i++)
		// {
		// 	if((abs(i-sy)<=d)&&(abs(n-sy)<=d))
		// 	{
		// 		cout<<"-1(here)\n";
		// 		return ;
		// 	}
		// 	else
		// 	{
		// 		continue;
		// 	}
		// }
		// for(int i=2;i<=n;i++)
		// {
		// 	if((abs(i-sx)<=d)&&(abs(m-sx)<=d))
		// 	{
		// 		cout<<"-1\n";
		// 		return ;
		// 	}
		// }
		if(min(sx - 1, m - sy) <= d && min(n - sx, sy - 1) <= d)
	{
		cout<<"-1\n";
		return;
	}	
		cout<<n+m-2<<"\n";

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