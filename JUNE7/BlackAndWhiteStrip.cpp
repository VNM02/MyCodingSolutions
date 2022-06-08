#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int maxSubArray(string s,int p) {
       int c=0;
        int maxs=INT_MIN;
        for(int i=0;i<p;i++)
        {
           char ch= s[i];
		   if(ch=='W')
		   {
			   c++;
			   maxs=max(maxs,c);
		   }
			else
			{
				c=0;
			}
        }
		if(maxs==INT_MIN)
		{
			maxs=0;
		}
        return maxs;
    }
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
     int n,k;
	cin>>n>>k;
	string s;
   cin>>s;
   int w=0;
   for(int i=0;i<n;i++)
   {
	   if(s[i]=='W')
	   {
		   w++;
	   }
   }
   int m=w;
   for(int i=1;i<n-k+1;i++)
   {
	   if(s[i-1]=='W')
	   {
		   w--;
	   }
	   if(s[i+k-1]=='W')
	   {
           w++;
	   }
	   m=min(w,m);
   }
   int y=maxSubArray(s,n);
   if(k<=y)
   {
 m=0;	  
   }
   cout<<y<<endl;
   cout<<m<<"\n";
}
return 0;
}