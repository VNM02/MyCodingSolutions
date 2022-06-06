#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll a,b;
  cin>>a>>b;
  if(b%2==0)
  {
	  if(a%2==0)
	  {
		  cout<<"YES"<<"\n";
	  }
	  else
	  {
		  cout<<"NO"<<"\n";
	  }
  }
  else
  {
	  cout<<"YES"<<"\n";
	  
  }
}
return 0;
}