#include<iostream>
using namespace std;
void multiply(int mat1[][3],int mat2[][3],int mat3[][3])
{
    int sr1=3,sc1=2,sr2=2,sc2=3;
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
}
void transpose(int mat[][3],int transpose[][3])
{
    int r=3,c=3;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            transpose[i][j]=mat[j][i];
        }
    }

}
int main()
{
	int sr1=3,sc1=2,sr2=2,sc2=3;//s=size and r=row and c=coloumn 
    int mat1[sr1][sc1]={{1,2,3},{3,4,5}};
    int mat2[sr2][sc2]={{1,2,3},{4,5,6}};
    int mat3[sr1][sc2];
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
	
    int transpos[sr1][sc2];
    cout<<"transpose matrix is";
    transpose(mat3,transpos);
    for(int i=0;i<sr1;i++)
	{
		for(int j=0;j<sc2;j++)
			cout<<transpos[i][j]<<"\t";
		cout<<"\n";
	}
}
