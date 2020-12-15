#include<iostream>
using namespace std;
int find_factorial(int fac)
{
    if(fac==1)
        return 1;
    else
    {
            return fac * find_factorial(fac-1);
    }
    
}
int main()
{
    int num=5;
    cout<<"the factorial of "<<num<<" is "<<find_factorial(num);
}