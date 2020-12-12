#include<iostream>
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
void Bubble_Sort(int a[], int size, int inputString[][6])
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
                char te[4]=inputString[j];
                inputString[j]=inputString[j+1];
                inputString[j+1]=te;
			}
		}
	}
}
int main()
{
    int r=4,c=5;
    char inputString[r][c] = {  "hey", "i" , "am" , "C3PO" };
    int len[r];
    for(int i=0;i<r;i++)
    {
        len[i]=stringLength(inputString[i]);
    }
    char a[]=inputString[1];

    Bubble_Sort(len,r,inputString);



}