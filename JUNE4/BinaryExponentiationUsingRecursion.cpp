#include <bits/stdc++.h>
typedef long long ll ;

using namespace std ;

int binaryExpo(int a,int b)
{
	//  if(b&1)
	//  {
	// 	 return a*binaryExpo(a,b/2)*binaryExpo(a,b/2);
	//  }
	//  else
	//  {
	// 	 return binaryExpo(a,b/2)*binaryExpo(a,b/2);
	//  }
	if(b==0)
	{
		return 1;
	}
	ll r=binaryExpo(a,b/2);
	if(b&1)
	{
		return a*r*r;
	}
	else
	{
		return r*r;
	}
}
int main(){
int k=binaryExpo(2,8);
cout<<k<<"\n";
return 0;
}