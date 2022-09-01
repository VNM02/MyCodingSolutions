#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a,b,t=0,min=0;
    
     for(int i=1;i<=n;i++){
      cin>>a>>b;
       t-=a;
       t+=b;
       if(min<t){
        min=t;
       }
     }
 cout<<min;
    return 0;
}
