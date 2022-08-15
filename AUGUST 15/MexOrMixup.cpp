#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
const int N=3e5+5;
int main(){
vector<int> vec(N,0);
int t;
cin>>t;
for(int i=1;i<N;i++)
{
	vec[i]=vec[i-1]^i;
}
for(int j=0;j<t;j++)
{
	int a,b;
	cin>>a>>b;
	int p=vec[a-1];
	if(p==b)
	{
		cout<<a<<"\n";
	}
	else 
	{
		int u=b^p;
		if(u==a)
		{
			cout<<a+2<<"\n";
		}
		else
		{
			cout<<a+1<<"\n";
		}
	}
}
return 0;
}