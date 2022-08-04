
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int v=0; v<t; v++){
        string s,ans="",s1="";
        cin>>s;
        sort(s.begin(), s.end());
        for(int i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1]){
                ans=ans+s[i];
                i++;
            }
            else s1=s1+s[i];
        }
        if(s[s.size()-1]!=s[s.size()-2]) s1=s1+s[s.size()-1];
        cout<<ans+ans+s1<<endl;
    }
    return 0;
}
