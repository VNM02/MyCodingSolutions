#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll n,a,b;
	cin>>n>>a>>b;
  
	vector<ll> vec;
    vec.push_back(0);
	for(int i=1;i<=n;i++)
	{
		vec.push_back(i);
	}
	ll temp=vec[a];
	vec[a]=vec[1];
    vec[1]=temp;
	temp=vec[b];
	vec[b]=vec[n];
	vec[n]=temp;
	if(n!=2)
	{
        	sort(vec.begin()+2,vec.end()-1);
	for(int i=2;i<=n/2;i++)
	{
		ll temp2=vec[n-i+1];
		vec[n-i+1]=vec[i];
		vec[i]=temp2;
	}
	ll ans=1;
	for(ll i=2;i<=n/2;i++)
	{
     if(vec[i]<vec[1])
	 {
		ans=-1;
		break;
	 }
	}
	if(a==n || b==1)
	{
		ans=-1;
	}
	for(ll i=(n/2)+1;i<n;i++)
	{
		if(vec[i]>vec[n])
		{
			ans=-1;
			break;

		}
	}
	if(ans!=-1)
	{
      for(int i=1;i<=n;i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<"\n";
	 }
	else
	{
		cout<<"-1"<<"\n";
	}

	}
    else
	{
		vec[1]=a;
		vec[2]=b;
		cout<<vec[1]<<" "<<vec[2]<<"\n";
	}
}
return 0;
}
