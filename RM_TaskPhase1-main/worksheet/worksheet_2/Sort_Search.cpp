#include <iostream>
using namespace std;
void Bubble_Sort(int a[], int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
void Selection_Sort(int a[], int size)
{
	int ptr;
	for(int i=0;i<size;i++)
	{
		ptr=i;
		for(int j=i+1;j<size-1;j++)
		{
			if(a[ptr]>a[j])
				ptr=j;
		}
		int t=a[ptr];
		a[ptr]=a[i];
		a[i]=t;
	}
}
int Binary_Search(int a[], int size, int search)
{
	int f=0,b=size-1,ind=-1;
	while(f<=b)
	{
		int m;
		m=(f+b-1)/2;
		if(a[m]==search)
			return m;
		else if(search>a[m])
			f=m+1;
		else
			b=m-1;
	}
	return -1;
}
void print(int a[], int size)
{
		for(int k=0;k<5;k++)
	{
		cout<<a[k]<<"\t";
	}
	cout<<endl;
}

int main()
{
	int a[5]={5,1,4,2,8};
	cout<<"'b' for bubble sort\n's' for selection sort"<<endl;
	char s; cin>>s;
	cout<<"initial array is\n";
	print(a,5);
	if(s=='b')
	{
		Bubble_Sort(a,5);
		cout<<"sorted array is\n";
		print(a,5);
	}
	else if(s=='s')
	{
		Selection_Sort(a,5);
		cout<<"sorted array is\n";
		print(a,5);
	}
	else 
		cout<<"invalid input";
	int search=4,ind=Binary_Search(a,5,search);
	cout<<"search element "<<search<<" found at array index - "<<ind;
	return 0;
}

		
		
