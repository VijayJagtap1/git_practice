#include<iostream>

using namespace std;

int main()
{
	int number,num2,i=2,temp,hcf=0;
	cout<<"Enter a number : ";
	cin>>number>>num2;
	int smaller = number<num2?number:num2;
	while(i<=smaller)
	{
		if((number%i==0) && (num2%i==0))
		{
			hcf = i;
		}
		
		i++;
	}
	cout<<"HCF of "<<number<<" and "<<num2<<" is "<<hcf;
	
}
