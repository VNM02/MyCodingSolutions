#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(arr[0]==1 && arr[n-1]==n)
	{
		cout<<0<<"\n";
	}
	
	else
	{
		int p=-1,q=-1;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==1)
			{
				p=i;
			}
			if(arr[i]==n)
			{
				q=i;
			}
		}
		if(p<q)
		{
			cout<<p+(n-q-1)<<"\n";
		}
		else
		{
			cout<<p+(n-q-1)-1<<"\n";
		}
	}

}
return 0;
}