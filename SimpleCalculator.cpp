#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;

    cout << "--------------------------------- " << endl;
    cout << "|       Simple Calculator       |" << endl;
    cout << "---------------------------------" << endl;
    cout << endl;

    cout << " Enter the first number : ";
    cin >> num1;

    cout << " Enter the Operator(+ - * / ) : ";
    cin >> op;

    cout << " Enter the second number : ";
    cin >> num2;

    cout<<endl;

    switch (op)
    {
    case '+':
        cout << "  Result : " << num1 + num2 << endl;
        break;

    case '-':
        cout << "  Result : " << num1 - num2 << endl;
        break;

    case '*':
        cout << "  Result : " << num1 * num2 << endl;
        break;

    case '/':

        if (num2 == 0)
        {
            cout << "Error" << endl;
        }
        else
        {

            cout << "  Result : " << num1 / num2 << endl;
        }
        break;

    default:
        cout << "Invalid Operator " << endl;
    }
    return 0;
}