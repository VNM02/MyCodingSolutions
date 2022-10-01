#include<bits/stdc++.h>
using namespace std;

int main()
{
    string our_in2;
    vector<int> a;
    vector<int> q;
    int num = 0;
    cin>>our_in2;
    for(int i = 0;i<our_in2.size();i++)
    {
        if(our_in2[i] == 'Q')
            q.push_back(i+1);
        else if(our_in2[i] == 'A')
            a.push_back(i+1);
    }
    for(int i = 0;i<q.size();i++)
    {
        for(int i2 = 0;i2<a.size();i2++)
        {
            for(int i3 = i+1;i3<q.size();i3++)
            {
                if(q[i] < a[i2] && a[i2] < q[i3])
                    num++;
            }
        }
    }
    cout<<num;
}
