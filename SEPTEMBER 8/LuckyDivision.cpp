#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[14]={4,7,44,47,74,77,444,447,477,474,744,747,774,777};

    int n;
    cin>>n;
    int flag=0;
    for(int i=0;i<14;i++)
    {
        if(n%arr[i]==0)
        {
            flag=1;


        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
