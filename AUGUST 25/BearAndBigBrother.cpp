#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    for(i=1;n*pow(3,i)<=m*pow(2,i);i++);
    cout<<i;
    return 0;
}
