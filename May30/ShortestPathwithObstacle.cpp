#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{ 
	ll x1,x2,x3,y1,y2,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
ll p=abs(x1-x2)+abs(y1-y2);
 cout<<(((x1!=x2 && y1!=y2) || ((x3<min(x1,x2) || x3>max(x1,x2))||(y3<min(y1,y2)||y3>max(y1,y2))))?p:p+2)<<endl;
}

return 0;
}