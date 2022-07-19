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
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	bool check=false;
    for(int i=1;i<n;i++)
	{
		if(arr[i]>=arr[i-1])
		{
			check=true;
			break;
		}
	}
	if(check)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}//cout<<a<<" "<<e<<"\n";
}
return 0;
}