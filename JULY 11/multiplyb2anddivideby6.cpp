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
		cout<<0<<"\n";
	}
	else
	{
		int co2=0,co3=0;
		 while (n%2 == 0){
      	n = n/2;
		co2++;
   		}
		while (n%3 == 0){    
      	n = n/3;
		co3++;
   		}
	 if(co3>=co2 && n==1)
	 {
		cout<<(co3-co2)+co3<<"\n";
	 }
	 else
	 {
		cout<<-1<<"\n";
	 }
	}
}
return 0;
}
