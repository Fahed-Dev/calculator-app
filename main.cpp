#include <iostream>
using namespace std;

int Add(int number1, int number2)
{
    return number1 + number2;
}

int Subtract(int number1, int number2)
{
    return number1 - number2;
}

int main()
{
    cout << "10 + 5 = " << Add(10, 5) << endl;
    cout << "10 - 5 = " << Subtract(10, 5) << endl;

    return 0;
}