#include<stdio.h>
#include<conio.h>
#include<iostream>
class largest{
	public:
	int num[5];
	
	void get()
	{
		int i;
		std::cout<<"Enter 5 elements\n";
		for(i=0;i<5;i++)
		std::cin>>num[i];
	}
	void larg()
	{
		int temp,i;
		temp = 0;
		for(i=0;i<5;i++)
		{
			if(temp<num[i])
			{
				 temp = num[i];
			 }
		}
		std::cout<<"\n"<<"Largest element is "<<temp;
	}
};
int main()
{
	largest l;
	l.get();
	l.larg();
}
