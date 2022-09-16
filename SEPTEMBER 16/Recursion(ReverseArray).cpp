#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
void reverse(int arr[],int i ,int j)
{
	if(i>j)
	{
		return;
	}
	swap(arr[i],arr[j]);
	i++;
	j--;
	reverse(arr,i,j);
}
int main(){
int num;
cin>>num;
int arr[num];
for(int i=0;i<num;i++)
{
	cin>>arr[i];
}
reverse(arr,0,num-1);
for(int i=0;i<num;i++)
{
	cout<<arr[i]<<" ";
}
cout<<"\n";
return 0;
}
