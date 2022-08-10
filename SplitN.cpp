#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n;
	cin>>n;
	if((n)&(n-1)==0)
	{
		cout<<"0\n";
	}
	else
	{
		cout<<__builtin_popcount(n)-1<<"\n";
	}
}

return 0;
}