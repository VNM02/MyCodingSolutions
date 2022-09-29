
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, m=0, c=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a>b) m++;
        if(b>a) c++;
    }
    if(m>c) cout<<"Mishka";
    if(c>m) cout<<"Chris";
    if(c==m) cout<<"Friendship is magic!^^";
}
