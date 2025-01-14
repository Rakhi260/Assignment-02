#include<stdio.h>
#include<conio.h>
#include<iostream>
class table{
	public:
		int num;
		
	void get()
	{
		std::cout<<"Enter number you want table of: ";
		std::cin>>num;
	}
	void tab()
	{
		int i;
		for(i=1;i<=10;i++)
		std::cout<<num<<"x"<<i<<"="<<num*i<<"\n";
	}
};
int main()
{
	table t;
	t.get();
	t.tab();
}
