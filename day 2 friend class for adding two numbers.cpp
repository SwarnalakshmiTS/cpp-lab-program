#include <iostream>
using namespace std;

class Calculator
{
private:
    int first, second;
    friend int addNumbers(Calculator, int i, int j);
    int Add()
    {
        return first + second;
    }
};

int addNumbers(Calculator c, int firstNum, int secondNum)
{
    c.first = firstNum;
    c.second = secondNum;

    return c.Add();
}

int main()
{
    Calculator c;
    int firstNum, secondNum;

    cout << "Enter the first number: " << endl;
    cin >> firstNum;

    cout << "Enter the second number: " << endl;
    cin >> secondNum;

    cout << "Sum: " << addNumbers(c, firstNum, secondNum) << endl;
}
