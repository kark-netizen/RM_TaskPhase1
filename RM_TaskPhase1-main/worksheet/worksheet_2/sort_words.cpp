#include<iostream>
#include<string>
using namespace std;
int stringLength(char *ptr) 
{ 
    int length = 0; 
    while (*ptr!= '\0') { 
        length++; 
        ptr++; 
    } 
    return length; 
}  
void copyString(char *ptr, int length, char copy[])
{
    int i=0;
    while(*ptr!='\0')
    {
        ptr++;
        cout<<*ptr<<endl;
    }
}
void Selection_Sort(int *length, int n, string words[] )
{
	int ptr;
	for(int i=0;i<n;i++)
	{
		ptr=i;
		for(int j=i+1;j<n-1;j++)
		{
			if(length[ptr]>length[j])
				ptr=j;
		}
		int t=length[ptr];
		length[ptr]=length[i];
		length[i]=t;
        string word=words[ptr];
        words[ptr]=words[i];
        words[i]=word;
    }
    return;
}
int main()
{
    int r=4,c=5;
    string inputString[r]= {  "hey", "i" , "am" , "C3PO" };
    int len[r];
    for(int i=0;i<r;i++)//calculates length of each word
    {
        len[i]=inputString[i].length();
    }
    Selection_Sort(len,r,inputString);
    for(int i=0;i<r;i++)
    {
        cout<<inputString[i]<<endl;
    }   

}