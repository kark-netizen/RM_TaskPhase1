//sizeof(arr) returns the size of an array in bits
//integer array of size 5 will return 20=4*5
//find actual size using sizeof(arr)/sizeof(arr[0])
#include<iostream>
using namespace std;
int smallest(int array[],int ptr,int i,int n)//finds smallest integer of array for selection sort
{
    if(i==n)
    return ptr;
    else if(array[ptr]>array[i])
    {   
        ptr=i;
    }
    return smallest(array,ptr,++i,n);
    
}
int main()
{
    int n=5;
    int array[n]={11,52,33,64,15};
    for(int i=0;i<n;i++)//selection sort
    {
        int ptr=i;
        ptr=smallest(array,ptr,i,n);
        int temp=array[ptr];
        array[ptr]=array[i];
        array[i]=temp;
    }
    cout<<"the sorted array is as follows"<<endl;
    //print(array); to be added later using recursion
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<"\t";
    }

}