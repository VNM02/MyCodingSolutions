class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int c=0;
        int prev=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=prev;j<t.length();j++)
            {
                if(s[i]==t[j])
                {
                    c++;
                    prev=j+1;
                    break;
                }
            }
        }
        if(c==s.length())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
