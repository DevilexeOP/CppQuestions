#include <iostream>
using namespace std;

int main()
{
    // Q5-> Write a program in C++ to display various type or
    // arithmetic operation using mixed data type
    int a, b;
    float c, d;
    cout << "Enter first number " << endl;
    cin >> a;
    cout << "Enter second number " << endl;
    cin >> b;
    cout << "ADD :" << a + b << endl;
    cout << "SUB :" << a - b << endl;
    cout << "DIV :" << a / b << endl;
    cout << "MUL :" << a * b << endl;
    cout << "REMAIN :" << a % b << endl;
    if (a % b == 0)
    {
        cout << "Even with no remainder" << endl;
    }

    cout << "Enter float 1 " << endl;
    cin >> c;
    cout << "Enter float 2" << endl;
    cin >> d;
    cout << "ADD :" << c + d << endl;
    cout << "SUB :" << c - d << endl;
    cout << "DIV :" << c / d << endl;
    cout << "MUL :" << c * d << endl;
    cout << "REMAIN C%A :" << int(c) % a << endl;
    cout << "REMAIN D%A :" << int(d) % a << endl;
    cout << "REMAIN C%B :" << int(c) % b << endl;
    cout << "REMAIN D%B :" << int(d) % b << endl;

    if (int(c) % a == 0 && int(d) % a == 0 && int(c) % b == 0 && int(d) % b == 0)
    {
        cout << "EVEN" << endl;
    }

    return 0;
}