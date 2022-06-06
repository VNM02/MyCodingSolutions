#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;

    int factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}
    
    vector<vector<int>> generate(int numRows) {
   vector<vector<int>> ans;
        for(int i=0;i<numRows;i++)
    {
        vector <int> vec;
        for(int j=0;j<=i;j++)
        {
            vec[j]=factorial(i)/(factorial(i-j)*factorial(j));
        }
        ans.push_back(vec);
    }
        return ans;
    }
    

int main(){
	vector<vector<int>> vect=generate(5);
	 for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }    
        cout << endl;
    }
  
return 0;
}