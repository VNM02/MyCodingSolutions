#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(int i=0;i<t;i++)
{
	int n,ans=0;
	cin>>n;
	string s;
	cin>>s;
	bool arr[91]={false};
	for(int i=0;i<n;i++)
	{
		int k=(int)s[i];
       if(arr[k]==false)
	   {
		ans+=2;
		arr[k]=true;
	   }
	   else
	   {
		ans+=1;
	   }
	}
	cout<<ans<<"\n";
}
return 0;
}