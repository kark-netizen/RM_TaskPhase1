//note that every time i terminate program, the case its supposed to counter is written in comments
#include<iostream>
using namespace std;
int main()
{
	
	cout<<"input number\n";
	int n,n1,n2,crest=0;
	cin>>n;
	if(n/100==0)//22
	{
		cout<<"not a hill number1";
		return 0;
	}
	n1=n%10;
	n/=10;
	n2=n%10;
	n/=10;
	if(n1>=n2)//123
	{
		cout<<"not a hill number2";
		return 0;
	}
	while(true)
	{
		if(crest==0)
		{
			if(n2>n1)
			{
				n1=n2; 
				n2=n%10;
				n/=10;
				continue;
			}
			else if(n2==n1)//1223
			{
				cout<<"not a hill number3";
				return 0;
			}	
			else
			{
				crest=1;
				n1=n2;
				n2=n%10;
				n/=10;
				if(n1==0)//752
				{
					cout<<"not a hill number4";
					return 0;
				}	
			}
		}
		else
		{
			if(n2==0)
				break;
			else if(n2>n1) 
			{
				cout<<"not a hill number5";
				return 0;
			}
			else
			{
				n1=n2;
				n2=n%10;
				n/=10;
				continue;
			}
			
		}
		
	}
	cout<<"hill number";
	return 0;
}
