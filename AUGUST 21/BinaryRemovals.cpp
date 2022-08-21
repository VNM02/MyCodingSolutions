#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int p=0;p<t;p++)
{
	  string s;
    cin >> s;
    int i = s.find("11");
    int j = s.rfind("00");
    cout << (i != -1 && j != -1 && i < j ? "NO" : "YES") << endl;
}
return 0;
}