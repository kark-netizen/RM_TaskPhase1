#include<iostream>
#include<cstdlib>//this is for modulus function
using namespace std;
int greatestCommonDivisor(int num1, int num2)
{
    if(num1%num2==0)
        return num2;
    if(num2%num1==0)
        return num1;
    if(num1+num2<0)//this is a possible solution for input of prime numbers
        return 1;
    return greatestCommonDivisor(num1,num2-num1);
}//this algorithim seems to break if the input are prime numbers

int main() 
{
    int num1,num2;
    cout<<"input smaller number"<<endl; cin>>num1;
    cout<<"input larger number"<<endl; cin>>num2;
    int gcd=abs(greatestCommonDivisor(num1,num2));//abs() function found in <cstdlib> calculates the absolute value(modulus of the number)
    cout<<"the greatest common divisor is "<<gcd;
}