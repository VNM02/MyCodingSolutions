#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll n,x,sum=0,ma=0,mi=0;
	cin>>n>>x;
	vector<ll> vec;
	for(int i=0;i<n;i++)
	{
		ll p;
		cin>>p;
		vec.push_back(p);
		sum+=p;
		double k=(double)p;
		ma+=ceil(k/x);
	}
	mi=ceil(((double)sum)/x);
	cout<<mi<<" "<<ma<<"\n";
}

return 0;
}
