#include<iostream>
using namespace std;
int main()
{
	int a,b,fac=1,sumFacA=0,sumFacB=0;
	cout<<"input the two numbers\n";
	cin>>a>>b;
	while(true)
	{
		if(fac>a/2)
			break;
		if(a%fac==0)
		{
			sumFacA+=fac;
		}
		fac++;
	}
	fac=1;
	while(true)
	{
		if(fac>b/2)
			break;
		if(b%fac==0)
		{
			sumFacB+=fac;
		}
		fac++;
	}
	if(sumFacA==b && sumFacB==a)
		cout<<"amicable numbers";
	else 	
		cout<<"hostile numbers";
	return 0;
		

}
