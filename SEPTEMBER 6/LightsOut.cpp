#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void distinctRiddle(int arr[],int n)
{
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    int distinct=0,nonDistinct=0;
    for(auto i:mp)
    {
        if(i.second==1)
        {
            distinct+=i.first;
        }
        else
        {
           nonDistinct+=i.first*(i.second);
        }
    }
    if(abs(distinct)>abs(nonDistinct))
    {
        cout<<distinct<<"\n";
    }
    else
    {
        cout<<"-1\n";
    }
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    distinctRiddle(arr,n);

return 0;
}
