#include<iostream>
using namespace std;
int main()
{
	int a,i,fact;
	fact=1;
	cout<<"enter the value a = ";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	cout<<"the factorial of"<<a<<" is "<<fact;

}
