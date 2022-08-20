#include <bits/stdc++.h>
typedef unsigned long long ll ;
using namespace std ;
void solve()
{
	ll n,k,b,s;
	cin>>n>>k>>b>>s;
	if(s<=((k*(b+1)-1)+(n-1)*(k-1)) && s>=k*b)
	{
		vector<ll> vec;
		ll copy=s;
		ll la=0;
			if(((k*(b+1)-1))<=s)
			{
				la=(k*(b+1)-1);
				copy-=(k*(b+1)-1);
			}
			else
			
			{
				
				la=s;
				copy-=s;
			}
			vec.push_back(la);
			if(n>1)
			{
				for(int i=1;i<n;i++)
				{
					vec.push_back(copy/k);
					
				}
				copy-=(n-1)*(copy/k);
				if(copy%k!=0)
				{
					int p=1;
					while(copy>0 && p<n)
					{
						vec[p]++;
						copy--;
						p++;
					}
				}
			}
			ll sum=0,beau=0;
			for(int i=0;i<n;i++)
			{
				sum+=vec[i];
				beau+=(vec[i])/k;
			}
			if(copy>0 || sum!=s || beau!=b)
			{
				cout<<"-1\n";
				return;
			}
			else
			{
					for(int i=0;i<n;i++)
			{
				cout<<vec[i]<<" ";
			}
			cout<<"\n";
			}
			

			

	}
	else 
	{
		cout<<"-1\n";
		return;
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