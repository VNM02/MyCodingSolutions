#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int i=0,n;
  string s,s1;
  cin>>s>>s1;
  char s2[s1.length()];
  n=s1.length()-1;
  while(i<=n)
    {
      swap(s1[i],s1[n]);
      n=n-1;
      i=i+1;
    }
  
 if(s==s1)
   {
   cout<<"YES"<<std::endl;
   }
 else
   {
cout<<"NO"<<std::endl;
   }
 

return 0;
}
