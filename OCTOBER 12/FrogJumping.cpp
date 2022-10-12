#include<iostream>
using namespace std;
int main()
{
    int R;
    cin>>R;
    while(R--)
    {
long long int A,B,c,t,sum=0;
cin>>A>>B>>t;
c=t/2;
if(t%2!=0)
{
long long int q3=c+1;
 sum=A*q3-B*c;
cout<<sum<<endl;
}
else
{
sum=A*c-B*c;
cout<<sum<<endl;
}
}
}

  		   				   			  	  	 		 	 		
