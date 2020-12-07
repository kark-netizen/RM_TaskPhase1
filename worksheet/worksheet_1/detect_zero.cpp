#include<iostream>
using namespace std;
int main()
{	
	int n;
	cout<<"input size of array";
	cin>>n;
	int mat[n][n];
	cout<<"input elements of array";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>> mat[i][j];
	}
	int row[n],col[n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(mat[i][j]==0)
			{
				row[i]=1;
				col[j]=1;
			}
			
		}
	}
	for(int i=0;i<n;i++)
	{
		if(row[i]==1)
			for(int j=0;j<n;j++)
				mat[i][j]=0;
		if(col[i]==1)
			for(int j=0;j<n;j++)
				mat[j][i]=0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<mat[i][j];
		cout<<"\n";
	}
	return 0;
	
}
