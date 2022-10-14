#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>> t;
    while(t--)
        {
        int n, k;
        cin>>n >>k;
        int a[n] , b[n];
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0; i<n; i++)
        {
            int x=a[i];
            int y=b[n-i-1];
            if(x<y&&k>=1)
            {
                a[i]=y;
                k--;
            }
        }
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=a[i];

        }
        cout<<sum<<endl;
    }
}
