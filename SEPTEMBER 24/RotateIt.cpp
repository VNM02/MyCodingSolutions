// Online C++ compiler to run C++ program online

#include <bits/stdc++.h>
using namespace std;

vector<string> removeSpace(string str)
{
    vector<string> svec;
    string word = "";
    for (auto i:str)
    {
        if (i ==' ')
        {
            svec.push_back(word);
            word = "";
        }
        else {
            word=word+i;
        }
    }
    return svec;
}
char* RotateStringByKStep(char* str,int k)
{
	  int j;
    string stri = "";
    for (i = 0; i < str.length(); i++) {
        stri = stri + a[i];
    }
    vector<string> a=removeSpace(stri);
	j=0;
	char arr[a.size()];
    for(int i=k;i<k%(a.size());i++)
    {
        
		arr[j]=a[i];
		j++;
        
    }
    for(int i=0;i<(k%(a.size()));i++)
    {
        arr[j]=a[i];
		j++;
    }
	return arr;
    
}
int main() {
    // Write C++ code here
   string s;
   cin>>s;
   int k;
   cin>>k;
    char char_array[n + 1];
    strcpy(char_array, s.c_str());
   char ans[]=RotateStringByKStep(char_array,k);
  cout<<ans<<"\n";

    return 0;
}
