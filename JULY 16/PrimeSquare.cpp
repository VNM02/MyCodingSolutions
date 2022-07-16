#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
const int N=100000;
vector<int> vec(N,true);
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	ll n;
    	cin>>n;
      if (n%2==0){
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (i==j || i+j==n-1){
                        cout<<"1 ";
                    } else{
                        cout<<"0 ";
                    }
                }
                cout<<'\n';
            }
        } else{
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (i==j || (i+1)%n==j){
                        cout<<"1 ";
                    } else{
                        cout<<"0 ";
                    }
                }
                cout<<"\n";
            }
        }
}
return 0;
}