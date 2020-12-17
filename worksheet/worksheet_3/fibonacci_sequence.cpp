#include<iostream>
using namespace std;
int displaySequence(int a, int b, int num)
{
    if(num==0)
        return -1;
    cout<<a<<"\t";
    displaySequence(b,a+b,--num);
    return -1;
}
int main()
{
    displaySequence(0,1,40);
}