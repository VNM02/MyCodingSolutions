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
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=i+1;
	}
	for(int i=0;i<n;i+=2)
	{
		swap(arr[i],arr[i+1]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
return 0;
}