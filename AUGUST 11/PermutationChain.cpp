#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<n<<endl;
		vector<int> l;
		for (int i=1; i<=n; i++){
			l.push_back(i);
			cout<<i<<" ";
		}
		cout<<endl;
		for (int i=1; i<n; i++){
			swap(l[i],l[i-1]);
			for (int j=0; j<n; j++){
				cout<<l[j]<<" ";
			}
			cout<<endl;
		}
	}
	
}
