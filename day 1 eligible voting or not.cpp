#include <iostream>
using namespace std;

int main()
{
	int age ;


	cout<<"Enter the age of the person: ";
	cin>> age;

	if (age>=18)
	{
		cout<<"You are eligible for voting.";
	}
	else
	{
		cout<<"You are not eligible for voting.";
	}

	return 0;
}
