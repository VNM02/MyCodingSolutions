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
 if(n==1)
 {
	cout<<n<<"\n";
 }
 else
 {
	int arr[n];
	arr[0]=n;
	int p=1;
	for(int i=0;i<n;i++)
	{
      arr[i+1]=i+1;
	  cout<<arr[i]<<" ";
	}
	cout<<"\n";
 }
}
return 0;
}
