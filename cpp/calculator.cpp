#include <iostream>
using namespace std;

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    cout << "Enter one of the following operators (+, -, *, /) ";
    cin >> op;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout << "Whoops! It appears as if you have input an invalid operator or number. Please try again.";
    }

    cout << "The answer to " << num1 << op << num2 << " is " << result;
}