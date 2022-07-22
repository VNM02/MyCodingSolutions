#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++)
{
	int n;
	cin>>n;
	int arr[n];
	
    int min1 = 0;
    int max1 = 0;
    int ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if (arr[min1] > arr[i])
            min1 = i;
        if (arr[max1] < arr[i])
            max1 = i;
    }
 
    
    ans1 = max(min1, max1) + 1;
    ans2 += (n - min(min1, max1));
    ans3 += min1 + 1 + n - max1;
    ans4 = n - min1 + max1 + 1;
    int ans = min(ans1, min(ans2, min(ans3, ans4)));
    cout << ans << '\n';
}
return 0;
}
