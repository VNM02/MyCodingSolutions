#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int T,x,a,b,c;
	
	cin>>T;
 
	for(int i=0;i<T;i++)
	{
         cin>>x>>a>>b>>c;
 
		 if(x==1)
		 {
			if(a==2){
				 if(b==3){
                    cout<<"YES"<<endl;
				 }
				 else{
					cout<<"NO"<<endl;
				 }
			}
			else if(a==3)
			{
				if(c==2)
				{
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
			else{
				cout<<"NO"<<endl;
			}
		 }
		 else if(x==2)
		 {
			if(b==1){
				 if(a==3){
                    cout<<"YES"<<endl;
				 }
				 else{
					cout<<"NO"<<endl;
				 }
			}
			else if(b==3)
			{
				if(c==1)
				{
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
			else{
				cout<<"NO"<<endl;
			}
		 }
		 else{
			if(c==1){
				 if(a==2){
                    cout<<"YES"<<endl;
				 }
				 else{
					cout<<"NO"<<endl;
				 }
			}
			else if(c==2)
			{
				if(b==1)
				{
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
			else{
				cout<<"NO"<<endl;
			}
		 }
	}
	return 0;
}
