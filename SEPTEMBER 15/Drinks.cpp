#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
float t;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    t=t+a[i];
}
cout<<t/n;
return 0;}
