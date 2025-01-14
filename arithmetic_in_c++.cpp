#include<stdio.h>
#include<conio.h>
#include<iostream>
class arithmetic{
	public:
	int num1,num2;
	
	void get()
	{
		std::cout<<"Enter two numbers(n1>n2):";
		std::cin>>num1>>num2;
	}
	void arith()
	{
		std::cout<<"Addition is"<<num1 + num2<<"\n";
		std::cout<<"Subtraction is"<<num1 - num2<<"\n";
		std::cout<<"Multiplication is"<<num1 * num2<<"\n";
		std::cout<<"Division is"<<num1 / num2<<"\n";
	}
};
int main()
{
	arithmetic a;
	a.get();
	a.arith();
}
