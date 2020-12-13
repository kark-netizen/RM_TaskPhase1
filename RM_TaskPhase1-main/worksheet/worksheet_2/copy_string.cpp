#include<iostream>
using namespace std;
int string_length(char *ptr) 
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
int main()
{
    
    char inputString[] = "hello_world_people"; 
    int l=string_length(inputString);
    char copy[l];
    copyString(inputString,l,copy);
    cout<<copy;
    
}