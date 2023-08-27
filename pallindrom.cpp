#include <iostream>

using namespace std;

int main()
{
    string str;
    int flag;
    cout << "Enter Word:- " << endl;
    cin >> str;
    int length = str.length();

    for (int i = 0; i < length; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "The word is not pallindrom" << endl;
    }
    else
    {
        cout << "The word is pallindrom" << endl;
    }

    return 0;
}