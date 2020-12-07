#include<iostream>
using namespace std;
int main()
{
	cout<<"input size of mat1 and mat 2\n";
	int sr1,sc1,sr2,sc2;
	cin>>sr1>>sc1>>sr2>>sc2;
	cout<<"input the elements of mat1 and mat2\n ";
	int mat1[sr1][sc1],mat2[sr2][sc2];
	for(int i=0;i<sr1;i++)
	{
		for(int j=0;j<sc1;j++)
			cin>>mat1[i][j];
	}
	for(int i=0;i<sr2;i++)
	{
		for(int j=0;j<sc2;j++)
			cin>>mat2[i][j];
	}
	if(sc1!=sr2)
	{
		cout<<"can not multiply matrix";
		return 0;
	}
	int mat3[sr1][sc2];
	for(int i=0;i<sr1;i++)
	{
		for(int j=0;j<sc2;j++)
		{
			int x=0;
			for(int k=0;k<sr2;k++)
			{
				x+=mat1[i][k]*mat2[k][j];
			}
			mat3[i][j]=x;
		}
	}
	cout<<"matrix 1 is"<<"\n";
	for(int i=0;i<sr1;i++)
	{
		for(int j=0;j<sc1;j++)
			cout<<mat1[i][j]<<"\t";
		cout<<"\n";
	}
	cout<<"matrix 2 is"<<"\n";
	for(int i=0;i<sr2;i++)
	{
		for(int j=0;j<sc2;j++)
			cout<<mat2[i][j]<<"\t";
		cout<<"\n";
	}
	cout<<"product matrix is"<<"\n";
	for(int i=0;i<sr1;i++)
	{
		for(int j=0;j<sc2;j++)
			cout<<mat3[i][j]<<"\t";
		cout<<"\n";
	}
	
	
	
		
}
