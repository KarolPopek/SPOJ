#include <iostream>
using namespace std;

int main()
{
    int a, b, tab[10];
    char znak;

    while ( cin >> znak >> a >> b)
    {
        if (znak == 'z')
            tab[a] = b;
        if(znak == '+')
            cout << tab[a] + tab[b] << endl;
        if(znak == '-')
            cout << tab[a] - tab[b] << endl;
        if(znak == '*')
            cout << tab[a] * tab[b] << endl;
        if(znak == '/')
            cout << tab[a] / tab[b] << endl;
        if(znak == '%')
            cout << tab[a] % tab[b] << endl;
    }
    return 0;
}
