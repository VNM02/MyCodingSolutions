#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int p=0;p<t;p++)
{
	int n,m;
	cin>>n>>m;
	if(n==1 && m==1)
	{
		cout<<0<<"\n";
	}
	else
	cout<<2*(min(n,m)-1)+max(n,m)<<"\n";
}
return 0;
}