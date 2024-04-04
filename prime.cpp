#include<iostream>
using namespace std;
int main()
{
	int num,count=0,i=2;
	cout<<"Enter a number : ";
	cin>>num;
	while(i<num)
	{
		if(num%i==0)
		{
			count++;
		}
		i++;
	}
	if(count>1)
	{
		cout<<"not Prime number.";
	}
	else
	{
		cout<<"prime number.";
	}
	return 0;
}
