#include <iostream>
using namespace std;
int sumOfDigits(int sum)
{
    if(sum==0)
        return 0;
    else
    {
        return sum= sum%10+sumOfDigits(sum/10);
    }
}
int main()
{
    int num=1234;
    cout<<"sum of the digits of "<<num<<" is "<<sumOfDigits(num);//using recursion
    cout<<endl<<endl<<endl;
    int num1=12345,sum=0,copy=num1;//not using recursion 
    while(num1!=0)
    {
        sum+=num1%10;
        num1/=10;   
    }
    cout<<"sum of the digits of "<<copy<<" is "<<sum;
}