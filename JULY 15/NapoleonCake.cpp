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
	int brr[n];
	int c=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		brr[i]=0;
	}
   for(int i=n-1;i>=0;i--)
   {
	c=max(arr[i],c);
	if(c>0)
	{
      brr[i]=1;
	  c--;
	}
	
   }
   for(int i=0;i<n;i++)
   {
	cout<<brr[i]<<" ";
   }
   cout<<"\n";
}
return 0;
}