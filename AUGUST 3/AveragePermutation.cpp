#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int p=0;p<t;p++)
{
	int n;
	cin>>n;
	int j=n;
	int arr[n];
	if(n%2==0)
	{
		for(int i=0;i<n/2;i++)
		{
			arr[i]=j;
			j-=2;
		}
		j++;
		for(int i=n/2;i<n;i++)
		{
			arr[i]=j;
			j+=2;
		}

	}
	else
	{
		for(int i=0;i<=n/2;i++)
		{
			arr[i]=j;
			j-=2;
		}
		j+=3;
		for(int i=(n/2)+1;i<n;i++)
		{
			arr[i]=j;
			j+=2;
		}
	}
			for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
}
return 0;
}