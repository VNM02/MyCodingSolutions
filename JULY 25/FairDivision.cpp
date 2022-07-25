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
	int c1=0,c2=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==1)
		{
			c1++;
		}
		else
		{
			c2++;
		}
	}
	if(n%2==0)
	{
		if(c1%2==0 && c2%2==0)
		{
			cout<<"YES\n";
		}
		else 
		{
			cout<<"NO\n";
		}
	}
	else
	{
		if((c1+c2*2)%2==0 && c1!=0 && c2!=0)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}


}
return 0;
}
