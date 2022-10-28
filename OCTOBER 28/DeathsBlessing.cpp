#include <iostream>

using namespace std;
int main()
{
    int n,k,a,b,maxim=0;
    long long int suma=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>k;
        suma=0;
        maxim=0;
        for(int j=0;j<k;j++)
        {
            cin>>a;
            suma=suma+a;
        }
        for(int j=0;j<k;j++)
        {
            cin>>b;
            suma=suma+b;
            if(maxim<b)
                maxim=b;
        }
        suma=suma-maxim;
        cout<<suma<<endl;
    }
    return 0;
}
