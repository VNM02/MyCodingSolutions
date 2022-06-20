#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;

ll SumofDigits(ll n)
{
    ll sum=0;
    while(n>0)
    {
        sum+= n%10;
        n/=10;
    }
    return sum;
}
 
ll gcd(ll a, ll b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b); 
}
int main(){
ll t;
    cin>>t;
    for(ll j=0;j<t;j++)
    {
        ll n;
        cin>>n;
        if(gcd(n,SumofDigits(n))>1)
        {
            cout<<n<<endl;
        }
        else
        {
            ll a=0;
            while(gcd(n+a, SumofDigits(n+a))==1)
            {
                a++;
            }
            cout<<n+a<<endl;
        }
    }
return 0;
}
