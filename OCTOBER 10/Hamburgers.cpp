// USES BINARY SEARCH
#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
bool func(ll i,ll rb,ll rs,ll rc,ll nb,ll ns,ll nc,ll pb,ll ps,ll pc,ll r)
{
	ll b=max((ll)0,rb*i-nb);
	ll s=max((ll)0,rs*i-ns);
	ll c=max((ll)0,rc*i-nc);
	ll prib=pb*b;
	ll pris=ps*s;
	ll pric=pc*c;
	ll total=prib+pris+pric;
	return r>=total;
}
int main(){
  string str;
  ll nb,ns,nc;                        //Available ingresients
  ll pb,ps,pc;                        //Cost required to purchase ingresients
  cin>>str;
  cin>>nb>>ns>>nc;
  cin>>pb>>ps>>pc;
  ll rb=0,rs=0,rc=0,ans=0;
  ll r;
  cin>>r;
  for(ll i=0;i<str.length();i++)
  {
	if(str[i]=='B')
	{
		rb++;
	}
	else if(str[i]=='S')
	{
		rs++;
	}
	else
	{
		rc++;
	}
  }
  ll s=0, e = 10000000000000;
	while(s<=e)
	{
		ll m=(s+e)/2;
		if(func(m,rb,rs,rc,nb, ns,nc, pb, ps, pc, r))
		{
			ans=m;
			s=m+1;
		}
		else
		{
			e=m-1;
		}
	}
	cout<<ans<<"\n";
return 0;
}
