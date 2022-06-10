#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
	ll a,b,c,ans=0;
	cin>>a>>b>>c;
	if((a+b+c)%3==0)
	{
		ans=0;
	}
	else
	{
		ans=1;
	}
	cout<<ans<<"\n";
}
return 0;
}
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
// 	int n;
// 	cin>>n;
//     string s;
//     cin>>s;
//     if(s[0]>s[n-1])
//     {
//         char ch=s[0];
//         s[0]=s[n-1];
//         s[n-1]=ch;
//     }
//     cout<<s<<"\n";
//     return 0;
// }
