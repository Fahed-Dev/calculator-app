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

int Multiply(int number1, int number2)
{
    return number1 * number2;
}

int Divide(int number1, int number2)
{
    if (number2 == 0)
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return number1 / number2;
}

int Modulo(int a, int b) {
    if (b == 0) return 0;
    return a % b;
}

int main()
{
    cout << "--- Basic Calculations ---" << endl;
    cout << "10 + 5 = " << Add(10, 5) << endl;
    cout << "10 - 5 = " << Subtract(10, 5) << endl;
    cout << "10 * 5 = " << Multiply(10, 5) << endl;
    cout << "10 / 5 = " << Divide(10, 5) << endl;

    cout << "\n--- Additional Test Cases ---" << endl;
    cout << "20 + 30 = " << Add(20, 30) << endl;
    cout << "50 - 75 = " << Subtract(50, 75) << endl;
    cout << "12 * 12 = " << Multiply(12, 12) << endl;

    cout << "\n--- Chained Operations ---" << endl;
    cout << "(10 + 5) * 2 = " << Multiply(Add(10, 5), 2) << endl;
    cout << "(50 - 20) + 15 = " << Add(Subtract(50, 20), 15) << endl;

    return 0;
}