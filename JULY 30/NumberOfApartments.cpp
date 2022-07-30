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
	int i=0,k=0,p=0;
	bool check=false;
	if((n%3)==0 || (n%5)==0 || (n%7)==0)
	{
		if(n%3==0)
		{
			p=n/3;
             check=true;
	
		}
		else if(n%5==0 && check==false)
		{
            k=n/5;
             check=true;
	 
		}
		else if(n%7==0 && check==false)
		{
			i=n/7;
             check=true;
		
		}
		
	}
	if(check==false)
	{
            	for( i=0;i<=((n/7)) && check==false;i++)
	{
		for( k=0;k<=((n/5)) && check==false;k++)
		{
				for(p=0;p<=((n/3)) && check==false;p++)
				{
					 if(((i*7)+(k*5)+(p*3))==n)
	   				{
					check=true;
					break;
	   				}
				}
		} 
	}
	}

  if(check==true )
  {
     if(((p*3)+(k*5)+(i*7))>n)
	 {
		if(k>0)
		{
            k--;
		}
		if(i>0)
		i--;
	 }
	cout<<p<<" "<<k<<" "<<i<<"\n";
  }
  else
  {
	cout<<-1<<"\n";
  }
}
return 0;
}