#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
ll mod = 1e18 + 7;
long long binMultiply(long long a, long long b)
{
    long long ans = 0;
    while (b)
    {
        if (b & 1)
        {
            ans = ((ans % mod) + (a % mod)) % mod;
        }
        a = ((a % mod) + (a % mod)) % mod;
        b >>= 1;
    }
    return ans;
}
long long binExpoIterll(long long a, long long b)
{
    long long ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (binMultiply(ans, a)) % mod;
        }
        a = (binMultiply(a, a)) % mod;
        b >>= 1;
    }
    return ans;
}
int main(){
ll t;
cin>>t;
for(ll j=0;j<t;j++)
{
    ll n;
    cin >> n;
  
    int arr[n];
    for(int i=0 ;i<n;i++)
    {
        cin >> arr[i];
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        while ((arr[i] % 2) == 0)
        {
            arr[i] /= 2;
            k++;
        }
    }
    sort(arr, arr + n);
    ll sum = 0;
 
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }
 
    sum += arr[n - 1] * binExpoIterll(2, k);
 

	
 
  cout<<sum<<"\n";
}
return 0;
}
