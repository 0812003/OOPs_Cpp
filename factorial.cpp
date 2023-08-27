#include <iostream>

using namespace std;

int main()
{
    int a, fact = 1, i;
    cout << "Enter No.:- ";
    cin >> a;
    if (a < 0)
    {
        cout << "Factorial Dosen't Exist" << endl;
    }
    else if (a == 0)
    {
        cout << "The factorial is 1" << endl;
    }
    else
    {
        for (i = a; i >= 1; i--)
        {
            fact = fact * i;
        }
        cout << "The factorial is " << fact;
    }
    return 0;
}
