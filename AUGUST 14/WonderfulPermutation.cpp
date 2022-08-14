#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	int m=n,c=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<k;i++)
	{
		m=min(arr[i],m);
		if(arr[i]>k)
		{
			c++;
		}
	}
	cout<<c<<"\n";
}
return 0;
}