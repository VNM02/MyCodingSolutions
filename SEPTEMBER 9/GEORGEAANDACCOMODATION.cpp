#include<iostream>
using namespace std;
int main(){
int n,p,q;
cin>>n;
int t=0;
for(int i=0;i<n;i++)
{
    cin>>p>>q;
    if(q-p>=2)
    {
        t=t+1;
    }
}
cout<<t<<endl;

return 0;}
