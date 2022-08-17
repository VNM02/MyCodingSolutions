#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
    int n,k;
	cin>>n>>k;
    if (k%2==1)
    {
        cout<<"YES\n";
        int i=1;
        while(i<n){
            cout<<i<<" "<<++i<<"\n";
            ++i;
        }
    }
    else if(k%2==0){
        
        if (k%4!=0)
        {
            cout<<"YES\n";
            int i=3;
            while(i<n){
                cout<<i<<" "<<++i<<"\n";
                i+=3;
            }
            i=1;
            while(i<n){
                cout<<i+1<<" "<<i<<"\n";
                i+=4;
            }
        }
        else cout<<"NO\n";
        
    }
    else cout<<"NO\n";
}
return 0;
}
