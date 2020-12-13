//i tried to learn a few new things while this like the ostringsttream. Java did this by default, hence this is the logic that i found the easiest
#include<iostream>
#include <sstream>
#include<string>
using namespace std;
int main()
{
	cout<<"input a decimal number\n";
	int n;
	cin>>n;
	int nb=n;string bin="";
	while(nb!=0)//binary
	{
		ostringstream num;
		num << nb%2;
		bin=num.str()+bin;
		nb/=2;
	}
	
	cout<<"Binary equivalent is\t"<<bin;
	nb=n;bin="";
	string code="ABCDEF";
	while(nb!=0)//hexadecimal
	{
		ostringstream num;
		
		num << nb%16;
		if(nb%16>9)
			bin=code.at((nb%16)- 10)+bin;	
		else
			bin=num.str()+bin;
		nb/=16;
	}
	cout<<"\nHexadecimal equivalent is\t"<<bin;
		nb=n;bin="";
	while(nb!=0)//octal
	{
		ostringstream num;
		
		num << nb%8;
		bin=num.str()+bin;
		nb/=8;
	}
	cout<<"\nHexadecimal equivalent is\t"<<bin;
	return 0;
	
}
