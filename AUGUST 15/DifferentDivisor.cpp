#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
const int N=1e7+10;
vector<bool> vec(N,true);
int main(){
int t;
cin>>t;
vec[0]=false;
vec[1]=false;
for(int i=2;i<N;++i) 
{
	if(vec[i]==true)
	{
		for(int j=2*i;j<N;j+=i)
		{
			vec[j]=false;
		}
	}
}

for(int j=0;j<t;j++)
{
	int d;
	cin>>d;
	if(d==1)
	{
		cout<<6<<"\n";
	}
	else
	{
		int a,b;
		for(int i=d+1;i<=N;i++)
		{
			if(vec[i]==true)
			{
				a=i;
				break;
			}
		}
		for(int i=a+d;i<=N;i++)
		{
			if(vec[i]==true)
			{
				b=i;
				break;
			}
		}
		cout<<a*b<<"\n";
	}
}
return 0;
}
