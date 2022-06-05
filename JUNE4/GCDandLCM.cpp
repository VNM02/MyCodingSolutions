#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
ll gcd(ll a,ll b)
{ 
	if(a%b==0)
	{
		return b;
	}
	return gcd(b,a%b);
}
int main(){
ll m,n;
cin>>m>>n;
ll com_Div=gcd(m,n);
cout<<"GCD"<<"\n";
cout<<com_Div<<"\n";
cout<<"LCM"<<"\n";
cout<<(m*n)/com_Div<<"\n";
return 0;
}