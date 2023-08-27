#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    char ch;
    cout << "Enter first no.:- " << endl;
    cin >> a;
    cout << "Enter first no.:- " << endl;
    cin >> b;

    cout << "Options:- " <<endl;
    cout << "+(Addition)\n-(Subtraction)\n*(Multipliaction)\n/(Division)" << endl;
    cout << "\nEnter your choice:- " << endl;
    cin >> ch;

    switch (ch)
    {
    case '+':
        c = a + b;
        cout << "Addition is " << c << endl;
        break;
    case '-':
        c = a - b;
        cout << "Subtraction is " << c << endl;
        break;
    case '*':
        c = a * b;
        cout << "Multiplication is " << c << endl;
        break;
    case '/':
        c = a / b;
        cout << "Division is " << c << endl;
        break;
    default:
        cout << "Invalid Input" << endl;
        break;
    }
    return 0;
}