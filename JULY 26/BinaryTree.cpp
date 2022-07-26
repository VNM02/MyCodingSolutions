#include <bits/stdc++.h>
using namespace std;
struct node
{
int data;
struct node * left;
struct node * right;

};
struct node * create()
{

	cout<<"ENTER DATA : \n";
	cout<<"ENTER \n1. ENTER POSITIVE DATA TO CONTINUE \n2.ENTER NEGATIVE DATA TO EXIT\n";
	int x;
	cin>>x;
	if(x<0)
	{
		return  NULL;
	}
	else
	{
		struct node * newnode;
		newnode=new node;
		newnode->data=x;
		cout<<"ENTER DATA PRESENT IN LEFT CHILD OF "<<x<<"\n";
		newnode->left=create();
		cout<<"ENTER DATA PRESENT IN RIGHT CHILD OF "<<x<<"\n";
		newnode->right=create();
		return newnode;
	}
}
void preorder( struct node * p)
{
  if(p==NULL)
  {
	return;
  }
  cout<<p->data<<" ";
  preorder(p->left);
  preorder(p->right);
}
vector< vector < int > > levelorder( struct node * r)
{
	vector< vector < int >  > ans;
	if(r==NULL) 
	{
		return ans;
	}
	queue<node * > q;
	q.push(r);
	while(!q.empty())
	{
		int size=q.size();
		vector<int> level;
		for(int i=0;i<size;i++)
		{
			struct node * p=q.front();
			q.pop();
			if(p->left!=NULL)
			{
				q.push(p->left);
			}
			if(p->right!=NULL)
			{
				q.push(p->right);
			}
			level.push_back(p->data);
		}
		ans.push_back(level);
	}
	return ans;
}
vector<int> IterativePreorder(struct node * r)
{
	vector<int> ans;
	if(r==NULL)
	{
		return ans;
	}
	stack<node*> st;
	st.push(r);
	while(!st.empty())
	{
		r=st.top();
		st.pop();
		ans.push_back(r->data);
		if(r->right!=NULL)
		{
			st.push(r->right);
		}
		if(r->left!=NULL)
		{
			st.push(r->left);
		}
		
	}
	return ans;
}
vector<int> IterativeInorder(struct node *r)
{
	stack<node*> st;
	struct node * p=r;
	vector<int> ans;
	while(true)
	{
		if(p!=NULL)
		{
			st.push(p);
			p=p->left;
		}
		else
		{
			if(st.empty()==true)
			{
				break;
			}
			p=st.top();
			st.pop();
			ans.push_back(p->data);
			p=p->right;
		}
	}
	return ans;
}
int main()
{
	struct node * root;
	root=NULL;
	root=create();
	cout<<"RECURSIVE PREORDER \n";
	preorder(root);
	
	vector<vector<int>> vec;
	cout<<"LEVEL-ORDER \n";
	vec=levelorder(root);
	cout<<"\n";
	for(int i=0;i<vec.size();i++)
	{
		for(int j=0;j<vec[i].size();j++)
		{
			cout<<vec[i][j]<<" ";
		}
		cout<<"\n";
	}
	vector<int> pre;
	pre=IterativePreorder(root);
	cout<<"ITERATIVE PREORDER \n";
	for(int i=0;i<pre.size();i++)
	{
		cout<<pre[i]<<"\n";
	}
	cout<<"\n";
	vector<int> ino;
	ino=IterativeInorder(root);
	cout<<"ITERATIVE INORDER \n";
	for(int i=0;i<ino.size();i++)
	{
		cout<<ino[i]<<"\n";
	}
	cout<<"\n";
	delete root;
	return 0;
}
