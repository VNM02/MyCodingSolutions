#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;

for(ll j=0;j<t;j++)
{
	ll w,h,n;
	cin>>w>>h>>n;
	ll c=1;
		while(w%2==0)w/=2,c*=2;
		while(h%2==0)h/=2,c*=2;
    if(c>=n)
	{
		cout<<"YES"<<"\n";
	}
	else
	{
		cout<<"NO"<<"\n";
	}
}
return 0;
}