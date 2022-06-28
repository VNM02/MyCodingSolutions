#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
   string s;
   cin>>s;
   int n=s.length(),c=0,k=0;
int a[10000]={100};
   string p=""; 
   p+=s[n-2];
   p+=s[n-1];
   if(p=="00" || p=="25" || p=="50" || p=="100")
   {
	c=0;

   }
   
 else
 {
	        for(int i=0;i<n;i++) {
            if(s[i]=='2') {
                for(int j=i+1;j<n;j++) {
                    if(s[j]=='5') {
                        int d=(n-1-j)+(j-i-1);
                        a[k++]=d;
                    }
                }
            }
            if(s[i]=='5') {
                for(int j=i+1;j<n;j++) {
                    if(s[j]=='0') {
                        int d=(n-1-j)+(j-i-1);
                        a[k++]=d;
                    }
                }
            }
            if(s[i]=='7') {
                for(int j=i+1;j<n;j++) {
                    if(s[j]=='5') {
                        int d=(n-1-j)+(j-i-1);
                        a[k++]=d;
                    }
                }
            }
            if(s[i]=='0') {
                for(int j=i+1;j<n;j++) {
                    if(s[j]=='0') {
                        int d=(n-1-j)+(j-i-1);
                        a[k++]=d;
                    }
                }
            }
        }
        sort(a,a+k);
        c=a[0];
 }
   cout<<c<<"\n";
}
return 0;
}
