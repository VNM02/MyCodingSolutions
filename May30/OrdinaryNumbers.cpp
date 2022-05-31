#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;

int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll n;
	cin>>n;
ll digit=floor(log10(n)+1);
ll div=1;
//ll powerof100=1;
while(digit>0)
{
	div=div*10+1;
//	powerof100*=10;
	digit--;
}
div/=10;
ll count=0;
//cout<<div<<"\n";
if(div<=n)
{
	count=count+n/div;
}
div=div/10;
while(div>0)
{
	count+=9;
	div=div/10;
}

cout<<count<<"\n";
// cout<<div<<"\n";
}
return 0;
}
/* Example of Ordinary Numbers 1 to 9,11,22,33,44,... and 111,222,333 .... */