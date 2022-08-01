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
	sort(arr,arr+n);

	{
		for(int i=1;i<(n/2)+1;i++)
		{
			if(arr[i]%arr[0]<arr[0])
			{
				cout<<arr[i]<<" "<<arr[0]<<"\n";
			}
		}
		
	}

}
return 0;
}
