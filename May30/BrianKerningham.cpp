#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll n,c=0;
cin>>n;
while(n>0)
{
	n&=(n-1);
	c++;
}
cout<<c<<"\n";
return 0;
}