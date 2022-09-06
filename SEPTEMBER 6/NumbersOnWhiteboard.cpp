#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
	int n;
	cin>>n;
	vector<ll> vec;
	for(int i=1;i<=n;i++)
	{
		vec.push_back(i);
	}
	vector<pair<int,int> > p;
	
	while(vec.size()>1)
	{
		
		ll l=vec.back();
		vec.pop_back();
		p.push_back(make_pair(l,vec.back()));
		vec.back()=ceil(((double)vec.back()+(double)l)/2);
		//cout<<"CEIL IS : "<<vec.back()<<"\n";
		cout<<"\n";
	}
	cout<<vec[0]<<"\n";
	for(int i=0;i<p.size();i++)
	{
		cout<<p[i].first<<" "<<p[i].second<<"\n";
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