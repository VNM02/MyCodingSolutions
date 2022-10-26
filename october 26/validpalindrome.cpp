
class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++)
        {
            if((s[i]<=90 && s[i]>=65)||(s[i]>=97 && s[i]<=122))
            {            
                    str+=tolower(s[i]);
            }
            if(s[i]>=48 && s[i]<=57)
            {
                str+=s[i];
            }
        }
         transform(str.begin(), str.end(), str.begin(), ::tolower);
        int i=0,j=str.length()-1;
        while(i<=j)
        {
            if(str[i]!=str[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
