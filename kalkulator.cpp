#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char znak;

    while ( cin >> znak)
    {
        cin >> a >> b;

        if(znak == '+')
            cout << a + b << endl;
        if(znak == '-')
            cout << a - b << endl;
        if(znak == '*')
            cout << a * b << endl;
        if(znak == '/')
            cout << a / b << endl;
        if(znak == '%')
            cout << a % b << endl;
    }
    return 0;
}
