#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
ll binaryIter(ll a,ll b)
{
	int m=1e9+7;
	ll ans=1;
	while(b)
	{
		if(b&1)
		{
			ans=(ans*a)%(m);
		}
		a=(a*a)%(m);
		b=b>>1;
	}
	return ans;

}
int main(){
ll k=binaryIter(3,13);
cout<<k<<"\n";
return 0;
}