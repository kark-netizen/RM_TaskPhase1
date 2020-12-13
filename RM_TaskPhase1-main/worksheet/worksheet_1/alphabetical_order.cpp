//i understand its a tedious process to add matrix elements like this, will update this in future programs!
#include<iostream>
using namespace std;
int main()
{	
	string st;
	cout<<"Input the word\n";
	cin>> st;
	char arr[st.length()];

	for(int i=0;i<st.length();i++)
	{
		arr[i]=st.at(i);
	}
	for(int i=0;i<sizeof(arr);i++)
	{
		char ch=arr[i];
		int v;
		for(int j=i;j<sizeof(arr);j++)
		{
			if(arr[j]<=ch)
			{
				ch=arr[j];
				v=j;
			}
		}
		arr[v]=arr[i];
		arr[i]=ch;
		
		cout<<ch;
		
	}
	
	return 0;
}


