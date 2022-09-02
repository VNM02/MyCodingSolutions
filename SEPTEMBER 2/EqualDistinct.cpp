#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	int n;
	cin>>n;
	unordered_map<int,int> mp;
	int p;
	for(int i=0;i<n;i++)
	{
		
		cin>>p;
		mp[p]++;
	}

		int ans1=0,ans2=0;
		for(auto i = mp.begin(); i != mp.end(); i++)
		{
			if(i->second==1)
			{
				ans1++;
			}
			else
			{
				ans2+=i->second;
			}
			
		}
		if(ans1%2!=0 && ans2==0)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
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