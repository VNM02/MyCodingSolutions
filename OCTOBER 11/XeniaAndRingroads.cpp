#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	int n,m;
	cin>>n>>m;
	vector<int> vec;
	ll ans=0;
	int cur=1;
	for(int i=0;i<m;i++)
	{
		int l;
		cin>>l;
		if(l>=cur)
		{
			ans+=l-cur;
		}
		else
		{
			ans+=n-abs(l-cur);
		}
		cur=l;
	}

	
	cout<<ans<<"\n";
}
int main(){
solve();
return 0;
}
