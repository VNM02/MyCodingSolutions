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
    
        if(n < k){
            cout << k - n<<endl;
        }else{
            cout << (n-k)%2<<endl;
        }
	
}
return 0;
}