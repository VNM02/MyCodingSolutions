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
     int x,y;

	 for(int k=2;k<=29;k++)
	 {
		int p=(1<<k)-1;
		if(n%p==0)
		{
			x=n/p;
			break;
		}
		
		
	 }
	cout<<x<<"\n";
	///cout<<"x== "<<x<<" k=="<<y<<"\n";
}
return 0;
}


	//  for(int i=0;i<n;i++)
	//  {
	// 	if(check==true)
	// 	{
    //             for(int k=2;k<n;k++)
	// 	{
	// 		if(i*((1<<k)-1)==n)
	// 		{
	// 			x=i;
	// 			y=k;
	// 			check=false;
	// 			break;
	// 		}
	// 	}
	// 	}
		
	//  }