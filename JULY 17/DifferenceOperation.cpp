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
		cin>>arr[i];
	}
	int c=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]%arr[0]==0)
		{
			c++;
		}
	}
	
 if(c==(n-1))
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
