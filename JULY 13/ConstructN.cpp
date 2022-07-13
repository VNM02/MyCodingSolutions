#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	int n;
	cin>>n;
	int p=-1,q=-1;
	if(n%2==0 || n%7==0 || (n>7 && n%2!=0))
	{
		cout<<"YES\n";
	}
	else
	{
			cout<<"NO\n";	
	}
    // for(int i=0;i<=n/2;i++)
	// {
    //    for(int k=0;k<=n/7;k++)
	//    {
	// 	if((2*i + 7*k)==n)
	// 	{
	// 		p=i;
	// 		q=k;
	// 		break;
	// 	}
	//    }
	// }
	// if(p>=0 && q>=0)
	// {
	// 	cout<<"YES\n";
	// }
	// else
	// {
	// 	cout<<"NO\n";
	// }
//  cout<<p<<" "<<q<<"\n";
}
return 0;
}