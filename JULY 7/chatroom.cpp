#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){

string s;
	cin>>s;
	ll c=0,cl=0;
	bool arr[5]={false};
	if(s.length()>5)
	{
      for(int i=0;i<s.length();i++)
	  {
		if(s[i]=='h')
		{
            arr[0]=true;
			c++;
		}
		if(s[i]=='e')
		{
			arr[1]=true;
			c++;
		}
		if(s[i]=='l')
		{
			arr[2]=true;
			c++;
			cl++;
			
		}
		if(s[i]=='l' && cl>1)
		{
			arr[3]=true;
			c++;
		}
		if(s[i]=='o')
		{
			arr[4]=true;
			c++;
		}
	  }
	  c=1;
	  for(int i=0;i<5;i++)
	  {
		if(arr[i]!=true)
		{
			c=0;
			break;
		}
	  }
	  if(c==1)
	  {
		cout<<"YES";
	  }
	  else
	  {
		cout<<"NO";
	  }
	}
	else
	{
		cout<<"NO";
	}

return 0;
}
