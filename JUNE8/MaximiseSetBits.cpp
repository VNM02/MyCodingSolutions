#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
ll highPow(ll n)
{
    ll res = 0;
    for (ll i = n; i >= 1; i--) {
        if ((i & (i - 1)) == 0) {
            res = i;
            break;
        }
    }
    return res;
}
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll n,k,p;
	cin>>n>>k;
	ll arr[n];
	if(k%2!=0)
	{
		p=highPow(k+1);
	}
	else
	{
		if((k&(k-1))==0)
		{
			p=highPow(k-1);
		}
		else
		{
            p=highPow(k);
		}
		
	}
	cout<<p<<"\n";
	p-=1;
	if(n==1)
	{
		arr[0]=k;
	}
	else
	{
		arr[0]=p;
		k=k-p;
		cout<<k<<"\n";
		for(int i=1;i<n;i++)
		{
			if(p>=k)
			{
				arr[i]=p;
				k-=p;
			}
			else
			{
				if(p>>1>=0)
				{
                     p=p>>1;
				}
				
			}
		}
	}
	for(ll i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
return 0;
}