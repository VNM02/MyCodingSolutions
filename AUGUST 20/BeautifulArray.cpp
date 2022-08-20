#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void solve()
{
		ll n,k,b,s;
	cin>>n>>k>>b>>s;
	ll mi=k*b;
	if(n==1)
	{
		if(k*b==s)
		{
			cout<<s<<"\n";
		}
		else
		{
			cout<<"-1\n";
			return;
		}
	}
	else
	{
		if(k*b==s)
		{
			cout<<s<<"\n";
		}
		else
		{
					if(s<mi)
			{	
			cout<<"-1\n";
			return;
			}
		else
		{
		int copy=s;
		int la=0;
		if(k*(b+1)-1<=s)
		{
			la=k*(b+1)-1;
			copy-=la;
		}
		else
		{
			if(k*b<=s)
			{
			la=max(k*b,s);
			copy-=la;
			}
			else
			{
				cout<<"-1\n";
				return ;
			}
		}
		
			vector<ll> vec;
			vec.push_back(la);
			for(int i=1;i<n;i++)
			{
				vec.push_back(copy/k);

			}
			vec[n-1]+=copy%k;
				ll sum=0,beau=0;
			for(int i=0;i<n;i++)
			{
				sum+=vec[i];
				beau+=(vec[i])/k;
			}
			if(sum==s && b==beau)
			{
				
				for(int i=0;i<n;i++)
				{
					cout<<vec[i]<<" ";
				}
				cout<<"\n";
			}
			else
			{
				cout<<sum<<" "<<beau<<" ";
				cout<<"-1\n";
				return;
			}
			
			
		}
		}


		
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