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
	if(n%2==0)
	{
	for(int i=0;i<n;i+=2)
	{
		if(i%2==0)
		{
			arr[i+1]=i+1;
			arr[i]=i+2;
		}
		
		
	}
	}
	else
	{
	arr[0]=1;
	if(n>1)
	{
		for(int i=1;i<n;i+=2)
		{
			if(i%2!=0)
			{
				arr[i]=i+2;
				arr[i+1]=i+1;
			}
			
		}
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