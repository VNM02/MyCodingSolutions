#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int h,n,m;
	cin>>h>>n>>m;
	int p=h;
	for(int i=0;i<=n;i++)
	{
		if(i>0)
		{
			p/=2;
			p+=10;
		}
		for(int k=0;k<=m;k++)
		{
			if((p-(10*k))<=0)
			{
				h=p-(k*10);	
				break;
			}
		}
	}
	if(h<=0)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}

   
}
return 0;
}
