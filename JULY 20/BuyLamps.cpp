#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n,k,x,y;
	cin>>n>>k>>x>>y;
	int ans=min((k*x)+((n-k)*y),n*x);
	cout<<ans<<"\n";
}
return 0;
}
