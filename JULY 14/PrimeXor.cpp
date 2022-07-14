#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	int x,y,z;
	cin>>x>>y;
	z=x^y;
	int arr[3]={2,2,2};
	if(x&1)
	{
		arr[0]=x^2;
	}
	if(y&1)
	{
		arr[1]=y^2;
	}
	if(z&1)
	{
		arr[2]=z^2;
	}
	sort(arr,arr+3);
	cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<"\n";
}
return 0;
}