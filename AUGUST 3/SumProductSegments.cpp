#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;

int main(){
int t;
cin>>t;
for(int p=0;p<t;p++)
{
	ll x,y;
	cin>>x>>y;
	vector<pair<ll,ll> > vec;
	int a,b,c,d;
	if(x%2!=0)
	{	
		a=x/2;
		b=(x)-(x/2);
		
	}
	else
	{
		a=x/2;
		b=x/2;
		
	}
		
	for(int i=sqrt(y);i>=1;i++)
	{
		if(y%i==0)
		{
			c=i;
			d=y/i;
			
			break;
		}
	}
	sort(vec.begin(),vec.end());
	// vec.pop_back();
	// for(int i=0;i<vec.size();i++)
	// {
	// 	cout<<vec[i].first<<" "<<vec[i].second<<" ";
	// }
	// cout<<"\n";
    if(vec.size()<=1)
	{
		cout<<-1<<"\n";
	}
	else
	{
		bool check=false;
			if(b<c)
		{
			cout<<a<<" "<<b<<"\n";
			cout<<c<<" "<<d<<"\n";
			check=true;
		}

		if(check==false)
		{
			cout<<-1<<"\n";
		}
	}
}
return 0;
}