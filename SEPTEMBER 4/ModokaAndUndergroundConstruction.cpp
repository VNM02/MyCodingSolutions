#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	int n,k,r,c;
	cin>>n>>k>>r>>c;
 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if((i+j)%k==((r+c)%k))
			{
				cout<<"X";
			}
			else
			{
				cout<<".";
			}
		}
		cout<<"\n";
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
