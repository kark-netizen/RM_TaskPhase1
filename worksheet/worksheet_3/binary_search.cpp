#include<iostream>
using namespace std;
int binary_search(int a[],int left, int right, int searchThis)
{
    if(left<=right)
    {
        int mid=(left+right)/2;
        if(a[mid]==searchThis)
            return mid;
        else if(a[left]==searchThis)//this statement can be removed but this makes the algorithim a little more effecient
            return left;
        else if(a[right]==searchThis)//same with this, can be removed but more effecient with this
            return right;
        else if(searchThis<a[mid])
             return binary_search(a,left,mid-1,searchThis);
        else if(searchThis>a[mid])
            return binary_search(a,mid+1,right,searchThis);
    }
    return -1;//if the element is not present in the array
}
int main()
{
    int array[6]={10,20,30,40,50,60};
    int searchElement=15;
    int index=binary_search(array,0,sizeof(array)/sizeof(array[0])-1,searchElement);
    cout<<"the given number found at array index "<<index;
}
